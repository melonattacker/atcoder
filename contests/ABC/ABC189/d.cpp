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
    cin >> n;
    vector<ll> dp(2, 1); // dp[i][j]: x_iまで決めたy_iがjになるときの場合の数
    rep(i, 0, n) {
        string s; cin >> s;
        vector<ll> p(2);
        swap(dp, p);
        rep(j, 0, 2) rep(x, 0, 2) {
            int nj = j;
            if(s == "AND") nj &= x;
            else nj |= x;
            dp[nj] += p[j];
        }
    }
    cout << dp[1] << endl;
    return 0;
}