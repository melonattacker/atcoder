#include <bits/stdc++.h>
using namespace std;

long long pow(long long x, long long n) {
    long long ret = 1;
    while (n > 0) {
        // n の最下位bitが 1 ならば x^(2^i) をかける
        if (n & 1) {
            ret *= x;
        }
        x *= x;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}
int main() {
    long long x, n;
    cin >> x >> n;
    cout << pow(x, n) << endl;
    return 0;
}