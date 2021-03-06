#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;

    vector<int> A(N);
    ll ttl = 0;
    ll ans = 0;

    for(ll i = 0; i < N; i++) {
        cin >> A[i];
        ans += (A[i] * A[i]) * (N-1);
        ttl += A[i];
    }

    for(ll i = 0; i < N; i++) {
        ttl -= A[i];
        ans += -2 * ttl * A[i];
    }

    cout << ans << endl;

    return 0;
}