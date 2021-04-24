#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int D;
    ll G;
    cin >> D >> G;

    vector<ll> p(D);
    vector<ll> c(D);

    for(int i = 0; i < D; i++) {
        cin >> p[i];
        cin >> c[i];
    }

    ll res = 1<<29;

    for (int bit = 0; bit < (1<<D); ++bit) {
        ll sum = 0;
        ll num = 0;

        for(int i = 0; i < D; i++) {
            if(bit & (1<<i)) sum += p[i] * 100 * (i+1) + c[i], num += p[i];
        }

        if (sum >= G) res = min(res, num);
        else {
            for(int i = D-1; i >= 0; i--) {
                if(bit & (1<<i)) continue;
                for(int j = 0; j < p[i]; j++) {
                    if(sum >= G) break;
                    sum += 100 * (i+1);
                    num++;
                }
            }

            res = min(res, num);
        }
    }

    cout << res << endl;

    return 0;
}