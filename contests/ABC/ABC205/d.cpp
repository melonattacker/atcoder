#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<ll> A(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<ll> low(N);

    for(int i = 0; i < N; i++) {
        low[i] = A[i] - (i+1);
    }

    for(int i = 0; i < N; i++) {
        cout << low[i] << endl;
    }

    while (Q--) {
        long long K;
        cin >> K;
        const int idx = lower_bound(low.begin(), low.end(), K) - low.begin();
        if (idx == N) {
            cout << A[N - 1] + (K - low[N - 1]) << '\n';
        } else {
            cout << A[idx] - (low[idx] - K + 1) << '\n';
        }
    }
    return 0;
}