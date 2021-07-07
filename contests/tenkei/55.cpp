#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    ll N, P, Q;
    cin >> N >> P >> Q;

    vector<ll> A(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = 0;

    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            for(int k = j+1; k < N; k++) {
                for(int l = k+1; l < N; l++) {
                    for(int m = l+1; m < N; m++) {
                        if(A[i] * A[j] % P * A[k] % P * A[l] % P * A[m] % P == Q) {
                            ans++;
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}