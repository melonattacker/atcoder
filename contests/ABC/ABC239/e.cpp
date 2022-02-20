#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
using mint = modint1000000007;
using Graph = vector<vector<int>>;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

const int SIZE = 1 << 17;
V<int> X(SIZE);
Graph G(SIZE);
vector<vector<int>> dp(SIZE, vector<int>(40));
void dfs(int v, int lt) {
    dp[v][0] = X[v];
    for(int nv: G[v]) {
        if(nv == lt) continue; // 根に戻ったらスキップ
        dfs(nv, v);
        for(int i = 0; i < 20; i++) {
            dp[v][20+i] = dp[nv][i];
        }
        sort(dp[v].begin(), dp[v].end(), greater<int>());
    }
}
int main() {
    int N, Q;
    cin >> N >> Q;
    rep(i, 0, N) cin >> X[i];
    rep(i, 0, N-1) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(0, 0);
    while(Q--) {
        int v, k;
        cin >> v >> k;
        cout << dp[v-1][k - 1] << endl;
    }

    return 0;
}