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
    int N;
    cin >> N;

    V<string> S(N);

    rep(i, 0, N) cin >> S[i];
    int cnt = 0;

    // 文字列内のABをカウント
    rep(i, 0, N) rep(j, 0, S[i].size()-1) {
        if(S[i][j] == 'A' and S[i][j+1] == 'B') cnt++;
    }

    int c1 = 0, c2 = 0, c3 = 0;
    rep(i, 0, N) {
        if(S[i][0] == 'B' and S[i][S[i].size()-1] == 'A') c1++; // 先頭がBかつ末尾がAの文字列をカウント
        if(S[i][0] == 'B' and S[i][S[i].size()-1] != 'A') c2++; // 先頭がBかつ末尾がAでない文字列をカウント
        if(S[i][0] != 'B' and S[i][S[i].size()-1] == 'A') c3++; // 先頭がBでなく末尾がAの文字列をカウント
    }

    int ans = cnt;

    if(c1 == 0) ans += min(c2, c3);
    else {
        if(c2 + c3 > 0) ans += c1 + min(c2, c3);
        else ans += c1-1;
    }

    cout << ans << endl;

    return 0;
}