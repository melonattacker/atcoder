#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long d(long long a) {
    long long res = 0;
    while (a) {
        ++res;
        a /= 10;
    }
    return res;
}

int main() {
    ll N;
    cin >> N;

    ll digit = d(N);
    
    ll nokori;

    if(digit % 3 == 0) {
        nokori = (N - pow((ll)10, digit-1)) * (digit/3-1) + (digit/3-1);
    } else {
        nokori = (N - pow((ll)10, digit-1)) * (digit/3) + (digit/3);
    }

    ll ans = nokori;

    for(ll i = 1; i < digit; i++) {
        if(i % 3 == 0) {
            ans += (i / 3 - 1) * (pow((ll)10, i) - pow((ll)10, i-1));
        } else {
            ans += i / 3 * (pow((ll)10, i) - pow((ll)10, i-1));
        }
    }

    cout << ans << endl;

    return 0;
}