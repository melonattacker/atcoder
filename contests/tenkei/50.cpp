#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int mod = 1000000007;

int main() {
    int N, L;
    cin >> N >> L;

    vector<int> dp(100001);

    dp[0] = 1;
    for(int i = 1; i <= N; i++) {
        if(i < L) dp[i] = dp[i-1];
        else dp[i] = (dp[i-1] + dp[i-L]) % mod;
    }

    cout << dp[N] << endl;
    return 0;
}