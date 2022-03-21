#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
using mint = modint998244353;
using Graph = vector<vector<int>>;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N, M, K, S, T, X;
    cin >> N >> M >> K >> S >> T >> X;
    S--; T--; X--;
    vector<pair<int, int>> edge(M);
    rep(i, 0, M) {
        int u, x;
        cin >> u >> x;
        u--, x--;
        edge[i] = {u, x};
    }

    vector dp(K + 1, vector(N, array<mint, 2>{0, 0}));
    dp[0][S][0] = 1;
    rep(i, 0, K) for(auto [u, v]: edge) for(int x: {0, 1}) {
        dp[i+1][v][x ^ (v == X)] += dp[i][u][x];
        dp[i+1][u][x ^ (u == X)] += dp[i][v][x];
    }

    cout << dp[K][T][0].val() << endl;

    return 0;
}