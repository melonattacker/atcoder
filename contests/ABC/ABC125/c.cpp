#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> L(M);
    vector<int> R(M);

    for(int i = 0; i < M; i++) {
        cin >> L[i] >> R[i];
    }

    int mini = L[0];
    int maxi = R[0];

    for(int i = 1; i < M; i++) {
        mini = max(mini, L[i]);
        maxi = min(maxi, R[i]);
    }

    if(mini > maxi) {
        cout << 0 << endl;
    } else {
        cout << maxi - mini + 1 << endl;
    }

    return 0;
}