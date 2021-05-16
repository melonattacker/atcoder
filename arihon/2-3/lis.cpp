// 最長増加部分列問題
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    vector<int> dp(N);

    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int res = 0;
    for(int i = 0; i < N; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        res = max(res, dp[i]);
    }

    cout << res << endl;

    return 0;
}