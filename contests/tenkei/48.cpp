#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> v;

    for(int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        v.push_back(B[i]);
        v.push_back(A[i]-B[i]);
    }

    ll ans = 0;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i = 0; i < K; i++) ans += (ll)(v[i]);

    cout << ans << endl;

    return 0;
}