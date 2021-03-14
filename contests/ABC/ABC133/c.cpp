#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll L, R;
    cin >> L >> R;

    if(R - L >= 2019) cout << 0 << endl;
    else {
        ll ans = 2018;
        for(ll i = L; i < R; i++) {
            for(ll j = i+1; j <= R; j++) {
                ans = min(ans, (i*j)%2019);
            }
        }
        cout << ans << endl;
    }

    return 0;
}