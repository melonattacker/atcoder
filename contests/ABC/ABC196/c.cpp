#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll d(ll a) {
    ll res = 0;
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
    ll half = digit/2;

    ll ans = 0;

    string s_N = to_string(N).substr(0, half);

        
    if(digit % 2 == 0) {
        ans += (ll)pow(10, half-1) - 1;
        for(ll j = (ll)pow(10, half-1); j < (ll)pow(10, half); j++) {
            if(j * (ll)pow(10, half) + j <= N) {
                ans++;
            }
        }
    } else {
        ans += (ll)pow(10, half) - 1;
    }

    cout << ans << endl;

    return 0;
}