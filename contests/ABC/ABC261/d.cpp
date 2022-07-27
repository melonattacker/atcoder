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
    V<ll> x(n+1);
    rep(i, 0, n) cin >> x[i+1];
    V<ll> b(n+1);
    rep(i, 0, m) {
        int c, y;
        cin >> c >> y;
        b[c] += y;
    } 

    vector<vector<ll>> dp(n+1, vector<ll>(n+1, -infl));
    dp[0][0] = 0;
    for(int i = 1; i <= n; i++) {
        rep(j, 0, n+1) {
            ll now = -infl;
            if(j == 0) {
                rep(k, 0, n+1) now = max(now, dp[i-1][k]);
            } else {
                now = dp[i-1][j-1]+x[i]+b[j];
            }
            dp[i][j] = now;
        }
    }

    ll ans = 0;
    rep(j, 0, n+1) ans = max(ans, dp[n][j]);
    cout << ans << endl;
    return 0;
}