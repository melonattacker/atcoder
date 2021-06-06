#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<ll> A(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    ll ans = 0;

    for(int i = 0; i < N; i++) {
        if(A[i] <= 10) {
            continue;
        } else {
            ans += A[i] - 10;
        }
    }

    cout << ans << endl;

    return 0;
}