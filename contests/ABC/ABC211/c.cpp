#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

const int MOD = 1000000007;

// res[i][c] := i 文字目以降で最初に文字 c が登場する index (存在しないときは n)
vector<vector<int> > calcNext(const string &S) {
    int n = (int)S.size();
    vector<vector<int> > res(n+1, vector<int>(26, n));
    for (int i = n-1; i >= 0; --i) {
        for (int j = 0; j < 26; ++j) res[i][j] = res[i+1][j];
        res[i][S[i]-'a'] = i;
    }
    return res;
}


int main() {
    string S;
    string T = "chokudai";
    cin >> S;

    int N = S.size();

    vector<vector<int>> dp(N+1, vector<int>(8+1));

    for(int i = 0; i < N+1; i++) {
        dp[i][0] = 1;
    }

    // dp[i][j] : Sのi文字目までを使って、chokudaiのj文字目まで選択する方法の数
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 8; j++) {
            if(S[i] != T[j]) {
                // Sのi文字目とTのj文字目が異なるので、Sのi文字目に下線を引くことはあり得ない
                dp[i+1][j+1] = dp[i][j+1];
            } else {
                // dp[i][j+1] : Sのi文字目に下線を引かない時
                // dp[i][j] : Sのi文字目に下線を引く時
                dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % MOD;
            }
        }
    }

    cout << dp[N][8] << endl;
    
    return 0;
}