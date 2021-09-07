#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
ll mod = 1000000007;

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;

    vector<vector<ll>> dp(N+1, vector<ll>(8));

    // dp[position][atcoderの何文字目まで] = 通り数
    dp[0][0] = 1;

    for(int i = 0; i < (int)S.size(); i++) {
        for(int j = 0; j <= 7; j++) {
            dp[i+1][j] += dp[i][j]; // i+1文字目を選ばない場合はこれだけ
            if(S[i] == 'a' && j == 0) dp[i+1][j+1] += dp[i][j];
            if(S[i] == 't' && j == 1) dp[i+1][j+1] += dp[i][j];
            if(S[i] == 'c' && j == 2) dp[i+1][j+1] += dp[i][j];
            if(S[i] == 'o' && j == 3) dp[i+1][j+1] += dp[i][j];
            if(S[i] == 'd' && j == 4) dp[i+1][j+1] += dp[i][j];
            if(S[i] == 'e' && j == 5) dp[i+1][j+1] += dp[i][j];
            if(S[i] == 'r' && j == 6) dp[i+1][j+1] += dp[i][j];
        }
        for (int j = 0; j <= 7; j++) dp[i + 1][j] %= mod;
    }

    cout << dp[S.size()][7] << endl;

    return 0;
}