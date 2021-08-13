#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<ll> A(N+1);
    vector<ll> B(N);
    vector<ll> L(Q+1);
    vector<ll> R(Q+1);
    vector<ll> V(Q+1);

    for(int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for(int i = 1; i <= Q; i++) {
        cin >> L[i] >> R[i] >> V[i];
    }

    ll ans = 0;

    for(int i = 1; i <= N-1; i++) {
        B[i] = A[i+1] - A[i];
        ans += abs(B[i]);
    }

    for(int i = 1; i <= Q; i++) {
        ll before = abs(B[L[i]-1]) + abs(B[R[i]]);
        if(L[i] >= 2) B[L[i]-1] += V[i];
        if(R[i] <= N-1) B[R[i]] -= V[i];
        ll after = abs(B[L[i]-1]) + abs(B[R[i]]);
        ans += (after - before);
        cout << ans << endl;
    }

    return 0;
}