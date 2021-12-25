#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int N;
int dp[33][101010];
int ans[101010];

int main() {
    string S;
    cin >> S;
    N = S.length();

    rep(i, 0, N) {
        if(S[i] == 'R') dp[0][i] = i+1;
        else dp[0][i] = i-1;
    }

    // 前処理 : 「dp[p][i] : i番目のマスから2^p回移動した先のマス」 を求める
    rep(p, 0, 32) rep(i, 0, N) dp[p+1][i] = dp[p][dp[p][i]];

    // クエリ : dp[32][i]を使って各マスにいる子供の人数を求める
    rep(i, 0, N) ans[dp[32][i]]++;
    rep(i, 0, N) {
        if(i) printf(" ");
        printf("%d", ans[i]); 
    }
    printf("\n");
    return 0;
}