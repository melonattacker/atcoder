// 個数制限なしナップサック問題
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, W;
    cin >> n >> W;

    vector<int> w(n);
    vector<int> v(n);
    vector<vector<int>> dp(n+1, vector<int>(W+1));

    for(int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= W; j++) {
            if(j < w[i]) {
                // dp[i+1][j]: i番目までの品物から重さの総和がj以下となるように選んだ時の、価値の総和の最大値
                dp[i+1][j] = dp[i][j];
            } else {
                dp[i+1][j] = max(dp[i][j], dp[i+1][j-w[i]]+v[i]);
            }
        }
    }

    cout << dp[n][W] << endl;

    return 0;
}