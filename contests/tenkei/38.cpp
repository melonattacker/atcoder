#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    ll A, B, POW18 = 1000000000000000000LL;
    cin >> A >> B;

    ll r = B / gcd(A, B);
    
    if(r <= (POW18 / A)) {
        cout << A * r << endl;
    } else {
        cout << "Large" << endl;
    }

    return 0;
}