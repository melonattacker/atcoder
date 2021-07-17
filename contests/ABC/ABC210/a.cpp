#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    ll N, A, X, Y;
    cin >> N >> A >> X >> Y;

    ll ans = 0;

    if(N > A) {
        ans += A * X + (N - A) * Y;
    } else {
        ans += N * X;
    }

    cout << ans << endl;

    return 0;
}