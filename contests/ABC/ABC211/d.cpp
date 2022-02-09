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

int main() {
    int n, m;
    cin >> n >> m;
    Graph to(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    const int INF = 1001000000;
    vector<int> dist(n, INF);
    queue<int> q;
    q.push(0); dist[0] = 0;
    vector<int> vs;
    while(q.size()) {
        int v = q.front(); q.pop();
        vs.push_back(v);
        for(int u: to[v]) {
            if(dist[u] != INF) continue;
            dist[u] = dist[v]+1;
            q.push(u);
        }
    }

    vector<mint> dp(n);
    dp[0] = 1;
    for(int v: vs) {
        for(int u: to[v]) {
            if(dist[u] == dist[v]+1) {
                dp[u] += dp[v];
            }
        }
    }
    mint ans = dp[n-1];
    cout << ans.val() << endl;

    return 0;
}