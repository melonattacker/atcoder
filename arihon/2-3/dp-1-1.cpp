// 例題: ナップサック問題
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, W;
    cin >> N >> W;

    vector<int> w(N);
    vector<int> v(N);
    vector<vector<int>> dp(N+1, vector<int>(W+1));

    for(int i = 0; i < N; i++) {
        cin >> w[i];
        cin >> v[i];
    }

    for(int i = N-1; i >= 0; i--) {
        for(int j = 0; j <= W; j++) {
            // dp[i][j]はi番目以降の品物から重さの総和がj以下となるように選んだ時の、価値の最大値
            if(j < w[i]) {
                // この品物は入らない
                dp[i][j] = dp[i+1][j];
            } else {
                // 入れる場合と入れない場合を試す
                dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]] + v[i]);
            }
        }
    }

    cout << dp[0][W] << endl;

    return 0;
}