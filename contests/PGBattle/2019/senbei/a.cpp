#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    ll N, K;
    cin >> N >> K;

    vector<int> A(N);

    for(int i = 0; i < N; i++) cin >> A[i];

    ll ans = 0;

    for(int i = 0; i < N; i++) {
        if(A[i] <= K) continue;
        ans += A[i] - K;
    }

    cout << ans << endl;

    return 0;
}