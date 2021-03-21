#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<ll> A(N+1);
    vector<ll> B(N);

    for(int i = 0; i < N+1; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }

    ll ans = 0;

    for(int i = 0; i < N; i++) {
        ll fii = min(A[i], B[i]);
        ans += fii;
        A[i] -= fii;
        
        ll fi_i1 = min(A[i+1], B[i]-fii);
        ans += fi_i1;
        A[i+1] -= fi_i1;
    }

    cout << ans << endl;

    return 0;
}