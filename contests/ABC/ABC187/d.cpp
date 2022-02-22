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
    vector<ll> x(n);
    ll X = 0; // 高橋の得る票数-青木の得る票数
    rep(i, 0, n) {
        ll A, B;
        cin >> A >> B;
        X -= A;
        x[i] = 2*A+B;
    }
    sort(x.begin(), x.end());
    ll ans = 0;
    for(int i=n-1; i >= 0; --i) {
        ans++;
        X += x[i];
        if(X > 0) break;
    }
    cout << ans << endl;

    return 0;
}