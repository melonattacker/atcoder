#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, X, Y, A[330], B[330];
    int dp[330][330];
    cin >> N >> X >> Y;

    for(int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    for(int i = 0; i <= X; i++) {
        for(int j = 0; j <= Y; j++) {
            dp[i][j] = 100000;
        }   
    }

    dp[0][0] = 0;

    for(int i = 0; i < N; i++) {
        for(int j = X; j >= 0; --j) {
            for(int k = Y; k >= 0; --k) {
                int j2 = min(j + A[i], X); // 弁当を増やしてX個より小さければ採用
                int k2 = min(k + B[i], Y); // 弁当を増やしてY個より小さければ採用
                // dp[j2][k2] : j2個のたこ焼きとk2個のたい焼きを手に入れた時の弁当の最小個数
                dp[j2][k2] = min(dp[j2][k2], dp[j][k] + 1); 
            }
        }
    }

    int ans = dp[X][Y];
    if(ans > N) ans = -1;
    cout << ans << endl;

    return 0;
}