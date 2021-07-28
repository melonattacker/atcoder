#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll ans = 0;

    for(int i = 0; i < N; i++) {
        ans += abs(A[i] - B[i]);
    }

    cout << ans << endl;

    return 0;
}