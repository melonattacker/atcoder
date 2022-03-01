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
    int n; cin >> n;
    V<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    ll now = 0;
    ll ans = 0;
    ll b = 0, max_b = 0;
    rep(i, 0, n) {
        b += a[i];
        max_b = max(max_b, b);
        ans = max(ans, now+max_b);
        now += b;
    }
    cout << ans << endl;

    return 0;
}