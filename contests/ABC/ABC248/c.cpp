#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
typedef atcoder::modint998244353 mint;
using Graph = vector<vector<int>>;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

ll dp[3000][3000];
const ll MOD = 998244353;

int main() {
    ll N, M, K;
    cin >> N >> M >> K;

    // VV<ll> dp(N+1, V<ll>(M+1));

    rep(j, 1, M+1) {
        if(j <= K) dp[0][j] = 1;
    }
    for(int i = 0; i < N; i++) {
        for(int j = 1; j <= K; j++) { 
            for(int k = 1; k <= M; k++) {
                if(j+k <= K) {
                    dp[i+1][j+k] += dp[i][j];
                    dp[i+1][j+k] %= MOD;
                }
            }
        }
    }

    ll ans = 0;
    rep(j, N, K+1) {
        // cout << j << ":" << dp[N-1][j].val() << endl;
        ans += dp[N-1][j];
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}