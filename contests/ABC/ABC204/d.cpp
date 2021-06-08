#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 100000000;

int main() {
    int N;
    cin >> N;

    vector<int> T(N);
    // dp[i][t] := i番目まで料理作成が終わっていて、オーブンAの使用時間がtであるときのオーブンBの使用時間の最小値
    vector<vector<int>> dp(N+1, vector<int>(N*1000+1));

    for(int i = 0; i < N; i++) {
        cin >> T[i];
    }

    for(int i = 0; i < N+1; i++) {
        for(int j = 0; j < N*1000+1; j++) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N*1000+1; j++) {
            if(dp[i][j] != INF) {
                dp[i + 1][j + T[i]] = min(dp[i][j], dp[i + 1][j + T[i]]); // オーブンA
                dp[i + 1][j] = min(dp[i][j] + T[i], dp[i + 1][j]); // オーブンB
            }
        }
    }

    int ans = INF;
    for(int j = 0; j < N*1000+1; j++) {
        ans = min(ans, max(j, dp[N][j]));
    }

    cout << ans << endl;

    return 0;
}