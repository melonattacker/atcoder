#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N;
    cin >> N;

    vector<int> V(N);
    vector<int> C(N);

    vector<int> dp(N);

    for(int i = 0; i < N; i++) {
        cin >> V[i];
    }

    for(int i = 0; i < N; i++) {
        cin >> C[i];
    }

    dp[0] = 0;

    for(int i = 1; i <= N; i++) {
        dp[i] = max(dp[i-1], dp[i-1] + V[i-1] - C[i-1]);
    }

    cout << dp[N] << endl;

    return 0;
}