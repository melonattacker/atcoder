#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }


ll mod = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(6));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> A[i][j];
        }
    }

    ll ans = 1;

    for(int i = 0; i < N; i++) {
        ans *= (ll)(A[i][0] + A[i][1] + A[i][2] + A[i][3] + A[i][4] + A[i][5]);
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}