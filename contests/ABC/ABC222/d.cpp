#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

typedef atcoder::modint998244353 mint;
#define rep(i, n) for (int i = 0; i < (n); i++)

mint dp[3010][3010];

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);

    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];

    int MAX = 3000;

    dp[0][0] = 1;
    rep(i, N + 1) {
        rep(j, MAX) dp[i][j + 1] += dp[i][j]; // 累積和をDPで管理
        if (i != N) {
            for (int j = A[i]; j <= B[i]; j++) dp[i + 1][j] += dp[i][j];
        }
    }
    
    cout << dp[N][MAX].val() << endl;

    return 0;
}