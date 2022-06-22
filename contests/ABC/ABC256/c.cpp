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

int H[3], W[3];
int main() {
    rep(i, 0, 3) cin >> H[i];
    rep(i, 0, 3) cin >> W[i];

    int ans = 0;
    rep(a, 1, 31) rep(b, 1, 31) rep(d, 1, 31) rep(e, 1, 31) {
        int c = H[0]-a-b;
        int f = H[1]-d-e;
        int g = W[0]-a-d;
        int h = W[1]-b-e;
        int i = W[2]-c-f;
        if(min({c, f, g, h, i}) > 0 and g+h+i == H[2]) ans++;
    }

    cout << ans << endl;

    return 0;
}