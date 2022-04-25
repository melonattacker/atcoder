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
    int N, H;
    cin >> N >> H;

    V<int> a(N), b(N);
    rep(i, 0, N) cin >> a[i] >> b[i];

    sort(a.begin(), a.end(), std::greater<int>());
    sort(b.begin(), b.end(), std::greater<int>());

    int ans = 0;
    rep(i, 0, N) {
        if(H <= 0 || b[i] < a[0]) break;
        H -= b[i];
        ans++;
    }

    if(H > 0) {
        if((H%a[0]) != 0) ans += H/a[0]+1;
        else ans += H/a[0];
    }

    cout << ans << endl;

    return 0;
}