// 分割数
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, M;
    cin >> n >> m >> M;

    vector<vector<int>> dp(m+1, vector<int>(n+1));

    dp[0][0] = 1;
    for(int i = 1; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            if(j - i >= 0) {
                // dp[i][j]: jのi分割の総数
                // jのi分割: j個の互いに区別できない品物を、i個以下に分割する方法の総数
                dp[i][j] = (dp[i-1][j] + dp[i][j-i]) % M;
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout << dp[m][n] << endl;

    return 0;
}