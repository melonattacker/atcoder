// 最長共通部分列問題
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    string s, t;
    cin >> n >> m;
    cin >> s >> t;

    // s1,..,siとt1,..,tiに対する共通部分列
    vector<vector<int>> dp(n+1, vector<int>(m+1));

    for(int i = 0; i < n; i++) {    
        for(int j = 0; j < m; j++) {
            if(s[i] == t[j]) {
                dp[i+1][j+1] = dp[i][j]+1;
            } else {
                dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }

    cout << dp[n][m] << endl;
    
    return 0;
}