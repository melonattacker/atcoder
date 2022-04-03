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
    ll N, K, X;
    cin >> N >> K >> X;
    
    vector<ll> A(N);
    ll ans = 0;
    rep(i, 0, N) cin >> A[i], ans += A[i];

    ll m = 0;
    rep(i, 0, N) m += A[i]/X;
    m = min(m, K);
    ans -= m*X;
    K -= m;

    rep(i, 0, N) A[i] %= X;
    sort(all(A));

    for(int i = N-1; i >= 0; i--) {
        if(K == 0) break;
        ans -= A[i];
        K--;
    }

    cout << ans << endl;

    return 0;
}