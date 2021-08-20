#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

const int MOD = 1000000007;

long long pow(long long x, long long n) {
    long long ret = 1;
    while (n > 0) {
        // n の最下位bitが 1 ならば x^(2^i) をかける
        if (n & 1) {
            ret = ret * x % MOD;
        }
        x = x * x % MOD;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

int main() {
    ll N, K;
    cin >> N >> K;
    
    if(K == 1) {
        cout << (N == 1 ? 1 : 0) << endl;
    }
    else if(N == 1) {
        cout << K % MOD << endl;
    }
    else if(N == 2) {
        cout << K * (K-1) % MOD << endl;
    }
    else {
        cout << K * (K-1) % MOD * pow(K-2, N-2) % MOD << endl;
    }

    return 0;
}