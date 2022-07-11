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

struct pos {
    ll x, y;
    pos(ll x = 0, ll y = 0) : x(x), y(y) {}
};

int main() {
    int n;
    cin >> n;

    pos s, t;
    cin >> s.x >> s.y;
    cin >> t.x >> t.y;

    V<pos> o(n);
    V<ll> r(n);
    rep(i, 0, n) {
        cin >> o[i].x >> o[i].y >> r[i];
    }
    auto pow2 = [](ll x) { return x*x; };
    auto dist = [&](pos a, pos b) {
        return pow2(a.x-b.x) + pow2(a.y-b.y);
    };
    int si = 0, ti = 0;
    rep(i, 0, n) {
        if(dist(s, o[i]) == pow2(r[i])) si = i;
        if(dist(t, o[i]) == pow2(r[i])) ti = i;
    }

    dsu uf(n);
    rep(i, 0, n) rep(j, 0, i) {
        ll d = dist(o[i], o[j]);
        ll r1 = r[i], r2 = r[j];
        if(r1 > r2) swap(r1, r2);
        if(d > pow2(r1+r2)) continue; // 外側
        if(d < pow2(r2-r1)) continue; // 内側
        uf.merge(i, j);
    }

    if(uf.same(si, ti)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}