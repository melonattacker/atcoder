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
    int N, K;
    cin >> N >> K;

    V<int> mi, pl;
    mi.push_back(0);
    pl.push_back(0);
    rep(i, 0, N) {
        int x; cin >> x;
        if(x <= 0) mi.push_back(-x);
        else pl.push_back(x);
    }

    sort(all(mi));
    sort(all(pl));

    int ans = inf;

    int n = mi.size();
    int m = pl.size();

    rep(i, 0, n) {
        int j = K-i;
        if(0 <= j and j < m) chmin(ans, mi[i]*2+pl[j]);
    }

    rep(i, 0, m) {
        int j = K-i;
        if(0 <= j and j < n) chmin(ans, pl[i]*2+mi[j]);
    }

    cout << ans << endl;

    return 0;
}