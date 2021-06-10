#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    vector<ll> h(N);

    for(int i = 0; i < N; i++) {
        cin >> h[i];
    }

    vector<ll> dp(N, INF); // 足場iにたどり着くまでの最小コスト

    dp[0] = 0;
    for(int i = 1; i < N; i++) {
        chmin(dp[i], dp[i-1] + abs(h[i]-h[i-1]));
        if(i > 1) chmin(dp[i], dp[i-2] + abs(h[i]-h[i-2]));
    }

    cout << dp[N-1] << endl;

    return 0;
}