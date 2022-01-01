#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int H, W;
    cin >> H >> W;

    V<string> s(H);
    VV<int> dp(H, V<int>(W, 1e9));
    dp[0][0] = 0;

    rep(i, 0, H) cin >> s[i];
    rep(i, 0, H) rep(j, 0, W) {
        if(i != H-1) chmin(dp[i+1][j], dp[i][j]+(s[i][j] == s[i+1][j] ? 0 : 1)); // 色が反転する回数をカウント
        if(j != W-1) chmin(dp[i][j+1], dp[i][j]+(s[i][j] == s[i][j+1] ? 0 : 1)); // 色が反転する回数をカウント
    }

    cout << (dp[H-1][W-1] + (s[0][0] == '#') + (s[H-1][W-1] == '#') ) / 2 << endl; // スタートとゴールが黒の場合を加えて, 2で割る

    return 0;
}