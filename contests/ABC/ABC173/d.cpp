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
    int N;
    cin >> N;
    V<int> A(N), C(N);
    rep(i, 0, N) cin >> A[i];
    sort(A.rbegin(), A.rend());
    ll ans = 0;
    int t = N-1;
    rep(i, 0, N) {
        int lim = 2;
        if(i == 0) lim = 1;
        rep(j, 0, lim) {
            if(t > 0) {
                ans += A[i];
                t--;
            }
        }
    }
    cout << ans << endl;

    return 0;
}