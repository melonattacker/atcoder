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
    int n, q;
    cin >> n >> q;

    V<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());

    V<ll> r(n+1);
    r[0] = 0;
    rep(i, 1, n+1) r[i] = a[i-1]+r[i-1];

    rep(i, 0, q) {
        ll x; cin >> x;
        ll ans = 0;
        auto itr = lower_bound(all(a), x);
        int dis = itr-a.begin();
        ans += max(x*dis-(r[dis]-r[0]), 0ll);
        ans += max((r[n]-r[dis])-x*(n-dis), 0ll);
        cout << ans << endl;
    }

    return 0;
}