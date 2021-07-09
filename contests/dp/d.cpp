#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N, W;
    cin >> N >> W;
    
    vector<ll> w(N);
    vector<ll> v(N);
    vector<vector<ll>> dp(N+1, vector<ll>(W+1));

    for(int i = 0; i < N; i++) {
        cin >> w[i];
        cin >> v[i];
    }

    for(int i = N-1; i >= 0; i--) {
        for(int j = 0; j <= W; j++) {
            // dp[i][j]はi番目以降の品物から重さの総和がj以下となるように選んだ時の、価値の最大値
            if(j < w[i]) {
                dp[i][j] = dp[i+1][j];
            } else {
                dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]] + v[i]);
            }
        }
    }

    cout << dp[0][W] << endl;

    return 0;
}