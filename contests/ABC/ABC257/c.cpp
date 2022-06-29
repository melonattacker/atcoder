#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
using mint = modint1000000007;
using Graph = vector<vector<int>>;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int n;
    string s;
    cin >> n >> s;
    V<int> w(n);
    rep(i, 0, n) cin >> w[i];
    map<int, V<int>> mp;
    rep(i, 0, n) mp[w[i]].push_back(i);

    int now = 0;
    rep(i, 0, n) if(s[i] == '1') now++; // 全員を大人だと判定した時の正解数
    int ans = now;

    for(auto p: mp) {
        for(auto i: p.second) {
            if(s[i] == '1') now--; // s[i]が1なら不正解に変わるので正解数を減らす
            else now++; // s[i]が0なら正解に変わるので正解数を増やす
        }
        ans = max(ans, now);
    }
    cout << ans << endl;

    return 0;
}