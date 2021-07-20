#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    double R, X, Y;
    cin >> R >> X >> Y;

    double d = sqrt(X * X + Y * Y);

    if(d == R) {
        cout << 1 << endl;
    } else if(d <= R + R) {
        cout << 2 << endl;
    } else {
        cout << ceil(d / R) << endl;
    }

    return 0;
}