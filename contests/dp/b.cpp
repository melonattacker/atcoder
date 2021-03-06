#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    int N, K;
    cin >> N >> K;

    vector<ll> h(N);
    vector<ll> dp(N, INF);

    for(int i = 0; i < N; i++) {
        cin >> h[i];
    }

    dp[0] = 0;

    for(int i = 1; i < N; i++) {
        for(int j = K; j >= 2; j--) {
            if(i - j >= 0) {
                dp[i] = min(dp[i], dp[i-j] + abs(h[i] - h[i-j]));
            }
        }
        dp[i] = min(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
    }

    cout << dp[N-1] << endl;

    return 0;
}