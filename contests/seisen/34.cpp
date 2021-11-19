#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int n;
    cin >> n;

    if (n == 0 || n == 1) {
        cout << 1 << endl;
        return 0;
    }

    vector<int> dp(n+1);

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << endl;

    return 0;
}