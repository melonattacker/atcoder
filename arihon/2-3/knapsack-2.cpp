// 01 ナップサック問題その2
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX_N = 100;
const int MAX_V = 100;
const int INF = MAX_N + MAX_V;

int main() {
    int n, W;
    cin >> n >> W;

    vector<int> w(n);
    vector<int> v(n);

    int max_v = 0;
    for(int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
        max_v = max(max_v, v[i]);
    }

    vector<vector<int>> dp(n+1, vector<int>(n * max_v + 1));

    dp[0][0] = 0;
    for(int j = 1; j < n * max_v + 1; j++) {
        dp[0][j] = INF;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= n * max_v; j++) {
            if(j < v[i]) {
                // dp[i+1][j]: i番目までの品物から価値の総和がjとなるように選んだ時の、重さの総和の最小値
                dp[i+1][j] = dp[i][j];
            } else {
                dp[i+1][j] = min(dp[i][j], dp[i][j - v[i]] + w[i]);
            }
        }
    }

    int res = 0;
    for(int i = 0; i <= n * max_v; i++) {
        if(dp[n][i] <= W) res = i;
    }
    cout << res << endl;

    return 0;
}