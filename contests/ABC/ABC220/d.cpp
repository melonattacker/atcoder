#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
using Graph = vector<vector<int>>;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

using mint = modint998244353;

int main() {
    int n;
    cin >> n;
    V<int> a(n);
    rep(i, 0, n) cin >> a[i];
    V<mint> dp(10);

    dp[a[0]] = 1;
    rep(i, 1, n) {
        int na = a[i];
        V<mint> p(10);
        swap(p, dp);
        rep(j, 0, 10) {
            dp[(j+na)%10] += p[j];
            dp[(j*na)%10] += p[j];
        }
    }
    rep(i, 0, 10) cout << dp[i].val() << endl;
    return 0;
}