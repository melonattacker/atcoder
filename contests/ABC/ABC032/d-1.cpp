#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N, W;
    cin >> N >> W;

    vector<ll> v(N);
    vector<ll> w(N);

    vector<vector<ll>> dp(N+1, vector<ll>(W+1));

    for(int i = 0; i < N; i++) {
        cin >> v[i] >> w[i];
    }

    for(int i = 0; i < N; i++) {
        // 下におろす
        for(int j = 0; j <= W; j++) dp[i+1][j] = dp[i][j];
        for(int j = 0; j <= W; j++) {
            // 添え字が負になるjは飛ばす
            if(j - w[i+1] < 0) continue;
            // dp[i+1][j]: 荷物がi+1番目まで選択可能で重さがj以下の価値の最大値
            dp[i+1][j] = max(dp[i+1][j], dp[i][j-w[i+1]] + v[i+1]);
        }
    }

    
    cout << dp[N][W] << endl;

    return 0;
}