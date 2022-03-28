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

vector<vector<int>> to(200010);
vector<int> ans;

void dfs(int v, int p = -1) {
    for(int u: to[v]) {
        if(u == p) continue;
        ans[u] += ans[v];
        dfs(u, v);
    }
}

int main() {
    int n, q;
    cin >> n >> q;

    rep(i, 0, n-1) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    ans.resize(n);
    rep(i, 0, q) {
        int p, x;
        cin >> p >> x;
        --p;
        ans[p] += x;
    }

    dfs(0);
    rep(i, 0, n) {
        cout << ans[i] << endl;
    }

    return 0;
}