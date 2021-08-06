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

    vector<int> A(N);
    vector<int> T(Q);
    vector<int> X(Q);
    vector<int> Y(Q);

    vector<int> v(N);
    iota(v.begin(), v.end(), 1);

    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < Q; i++) {
        cin >> T[i];
        cin >> X[i];
        cin >> Y[i];
    }
    
    int shift = 0;

    for(int i = 0; i < Q; i++) {
        if(T[i] == 1) {
            --X[i]; --Y[i];
            swap(A[(X[i] + shift) % N], A[(Y[i] + shift) % N]);
        } else if(T[i] == 2) {
            shift = (shift + N - 1) % N;
        } else if(T[i] == 3) {
            --X[i];
            cout << A[(X[i] + shift) % N] << endl;
        }
    }

    return 0;
}