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
    V<int> x(n), y(n);
    rep(i, 0, n) cin >> x[i] >> y[i];

    set<pair<int, int>> ret;
    rep(i, 0, n) rep(j, 0, n) {
        if(i != j) {
            int dx = x[i]-x[j];
            int dy = y[i]-y[j];
            int g = gcd(dx, dy);
            dx /= g;
            dy /= g;
            ret.insert({dx, dy});
        }
    }
    cout << ret.size() << endl;

    return 0;
}