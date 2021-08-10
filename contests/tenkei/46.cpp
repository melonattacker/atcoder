#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N), C(N);
	for (int i = 0; i < N; ++i) cin >> A[i];
	for (int i = 0; i < N; ++i) cin >> B[i];
	for (int i = 0; i < N; ++i) cin >> C[i];

    vector<int> am(46);
    vector<int> bm(46);
    vector<int> cm(46);

    for(int i = 0; i < N; i++) {
        am[A[i] % 46]++;
        bm[B[i] % 46]++;
        cm[C[i] % 46]++;
    }

    ll ans = 0;

    for(int i = 0; i < 46; i++) {
        for(int j = 0; j < 46; j++) {
            for(int k = 0; k < 46; k++) {
                if((i + j + k) % 46 == 0) {
                    ans += ll(am[i]) * bm[j] * cm[k];
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}