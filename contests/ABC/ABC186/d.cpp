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
    int n;
    cin >> n;
    V<int> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    ll s = 0;
    ll ans = 0;
    rep(j, 0, n) {
        ans += (ll)a[j]*j;
        ans -= s;
        s += a[j];
    }

    cout << ans << endl;

    return 0;
}