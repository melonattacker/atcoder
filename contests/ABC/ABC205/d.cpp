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

    vector<ll> a(n);
    vector<ll> k(q);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, q) cin >> k[i];

    vector<ll> c(n);
    rep(i, 0, n) c[i] = a[i]-i-1;
    rep(i, 0, q) {
        int r = lower_bound(c.begin(), c.end(), k[i])-c.begin();
        ll ans;
        if(r == 0) {
            ans = k[i];
        } else {
            ans = a[r-1]+(k[i]-c[r-1]);

        }
        cout << ans << endl;
    } 
    return 0;
}