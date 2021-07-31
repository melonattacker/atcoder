#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    ll N, M;
    cin >> N >> M;

    vector<ll> A(N);
    vector<ll> B(M);

    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < M; i++) cin >> B[i];

    sort(A.begin(), A.end());

    ll ans = INF;

    for(int i = 0; i < M; i++) {
        int pos1 = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
        ll Diff1 = INF, Diff2 = INF;
        if (pos1 < N) Diff1 = abs(B[i] - A[pos1]);
        if (pos1 > 0) Diff2 = abs(B[i]- A[pos1-1]);
        ans = min(ans, min(Diff1, Diff2));
    }

    cout << ans << endl;

    return 0;
}