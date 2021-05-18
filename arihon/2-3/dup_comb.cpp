// 重複組み合わせ
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, M;
    cin >> n >> m;

    vector<int> a(n);
    vector<vector<int>> dp(n+1, vector<int>(m+1));

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> M;

    // 1つも選ばない方法は常に1通り
    for(int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= m; j++) {
            if(j - 1 - a[i] >= 0) {
                // dp[i+1][j]: i番目までの品物からj個選ぶ組み合わせの個数
                // 引き算が含まれる場合には負の数にならないよう注意
                dp[i+1][j] = (dp[i+1][j-1] + dp[i][j] - dp[i][j-1-a[i]] + M) % M;
            } else {
                dp[i+1][j] = (dp[i+1][j-1] + dp[i][j]) % M;
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}