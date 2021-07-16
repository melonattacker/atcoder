#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

const int MAX_N = 110;
const int MAX_V = 100100;

int main() {
    int N;
    ll W;
    cin >> N >> W;
    
    vector<ll> w(N);
    vector<ll> v(N);
    vector<vector<ll>> dp(MAX_N, vector<ll>(MAX_V, INF));

    for(int i = 0; i < N; i++) {
        cin >> w[i];
        cin >> v[i];
    }

    dp[0][0] = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < MAX_V; j++) {
            // dp[i][j]はi番目以降の品物から価値の総和がjとなるように選んだ時の、重さの最小値
            if(j - v[i] >= 0) {
                // i番目の商品を選ぶ場合
                dp[i+1][j] = min(dp[i+1][j], dp[i][j-v[i]] + w[i]);
            } 
            // i番目の商品を選ばない場合
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
        } 
    }

    ll ans = 0;
    for(int i = 0; i < MAX_V; i++) {
        if(dp[N][i] <= W) {
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}