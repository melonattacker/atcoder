#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int fac(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main() {
    int P;
    cin >> P;

    int kouka = 10;
    int ans = 0;
    while(P > 0) {
        if(P - fac(kouka) >= 0) {
            P -= fac(kouka);
            ans++;
        } else {
            kouka--;
        }
    }

    cout << ans << endl;

    return 0;
}