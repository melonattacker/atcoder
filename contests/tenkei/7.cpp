#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 2000000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N, Q;
    cin >> N;

    vector<ll> A(N);

    for(int i = 0; i < N; i++) cin >> A[i];

    cin >> Q;
    vector<ll> B(Q);

    for(int i = 0; i < Q; i++) cin >> B[i];

    sort(A.begin(), A.end());

    for(int i = 0; i < Q; i++) {
        int pos1 = lower_bound(A.begin(), A.end(), B[i]) - A.begin(); // B[i]以上の要素の内の一番左側のイテレータ
        ll Diff1 = INF, Diff2 = INF;
        if (pos1 < N) Diff1 = abs(B[i] - A[pos1]);
        if (pos1 > 0) Diff2 = abs(B[i]- A[pos1-1]);
        cout << min(Diff1, Diff2) << endl;
    }

    return 0;
}