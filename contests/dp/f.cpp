#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string s, t;
    cin >> s >> t;

    vector<vector<int>> dp(3001, vector<int>(3001));

    // dp
    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < t.size(); j++) {
            // dp[i+1][j+1]: sのi文字目までとsのj文字目まででのLCSの長さ
            if(s[i] == t[j]) dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+1); // sのi文字目とtのj文字目を加えれば, 1文字伸びる
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i+1][j]); // sのi文字目とtのj文字目が同じなら, tのj文字目を考慮してもLCSの長さは変わらない
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j+1]); // sのi文字目とtのj文字目が同じなら, sのi文字目を考慮してもLCSの長さは変わらない
        }
    }

    // 文字列復元
    string ans = "";
    int i = (int)s.size(), j = (int)t.size();
    while(i > 0 && j > 0) {
        // (i-1, j) -> (i, j)と更新されている場合
        if(dp[i][j] == dp[i-1][j]) --i;
        // (i, j-1) -> (i, j)と更新されている場合
        else if(dp[i][j] == dp[i][j-1]) --j;
        // (i-1, j-1) -> (i, j)と更新されている場合
        else {
            ans = s[i-1] + ans;
            --i, --j;
        }
    }

    cout << ans << endl;

    return 0;
}