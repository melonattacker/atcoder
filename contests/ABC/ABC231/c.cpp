#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<ll> A(N);

    for(int i = 0; i < N; i++) cin >> A[i]; 

    sort(A.begin(), A.end());

    for(int i = 0; i < Q; i++) {
        ll x;
        cin >> x;
        auto itr = lower_bound(A.begin(), A.end(), x);
        cout << A.end()-itr << endl;
        // cout << N- (itr-A.begin()) << endl;
    }

    return 0;
}