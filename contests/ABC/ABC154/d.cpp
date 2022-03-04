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
    V<int> p(N);
    V<double> e(N);
    V<double> r(N+1);
    rep(i, 0, N) cin >> p[i];
    rep(i, 0, N) {
        e[i] = (double)(p[i]*(p[i]+1))/2;
        e[i] /= p[i];
    }
    rep(i, 1, N+1) r[i] = r[i-1]+e[i-1];

    double ans = 0;
    rep(i, 0, N-K+1) {
        chmax(ans, r[i+K]-r[i]);
    }

    cout << std::fixed << std::setprecision(10) << ans << endl;

    return 0;
}