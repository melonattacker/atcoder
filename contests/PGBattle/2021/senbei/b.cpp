#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    ll T;
    cin >> T;

    vector<ll> N(T);
    vector<ll> M(T);

    for(int i = 0; i < T; i++) {
        cin >> N[i] >> M[i];
    }


    for(int i = 0; i < T; i++) {
        ll mini = max(N[i] - M[i], (ll)1);
        ll left = 0, right = 1000000001;
        while (right - left > 1) {
            ll mid = (left + right) / 2;
            if (mid * (mid-1)/2 < M[i]) left = mid;
            else right = mid;
        }

        // cout << right << endl;
        ll maxi = N[i] - right + 1;

        cout << mini << " " << maxi << endl;
    }

    return 0;
}