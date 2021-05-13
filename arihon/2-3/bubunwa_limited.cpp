// 個数制限付き部分和問題
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, K;
    cin >> n >> K;

    vector<int> a(n);
    vector<int> m(n);
    vector<int> dp(K+1, -1);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> m[i];

    dp[0] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= K; j++) {
            if(dp[j] >= 0) {
                // d[i+1][j]: i番目まででjを作る際に余る最大のi番目の個数（作れない場合は-1）
                // 配列を再利用するのでd[j]になっている
                dp[j] = m[i];
            } else if(j < a[i] || dp[j-a[i]] <= 0) {
                dp[j] = -1;
            } else {
                dp[j] = dp[j-a[i]] - 1;
            }
        }
    }
    if(dp[K] >= 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}