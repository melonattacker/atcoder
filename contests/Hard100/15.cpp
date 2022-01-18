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
    int N;
    cin >> N;

    V<int> A(N);
    rep(i, 0, N) cin >> A[i];

    int plus = 0, minus = 0, zero = 0;
    rep(i, 0, N) {
        if(0 < A[i]) plus++;
        else if(A[i] < 0) minus++;
        else zero++;
    }

    ll ans = 0;
    if(minus % 2 == 0) {
        rep(i, 0, N) ans += abs(A[i]);
    }
    else if(0 < zero) {
        rep(i, 0, N) ans += abs(A[i]);
    }
    else {
        int mi = inf;
        rep(i, 0, N) chmin(mi, abs(A[i]));
        rep(i, 0, N) ans += abs(A[i]);
        ans -= mi * 2;
    }

    cout << ans << endl;

    return 0;
}