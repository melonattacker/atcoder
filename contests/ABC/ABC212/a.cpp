#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int A, B;
    cin >> A >> B;

    if(0 < A and B == 0) {
        cout << "Gold" << endl;
    } else if(A == 0 and 0 < B) {
        cout << "Silver " << endl;
    } else if(0 < A and 0 < B) {
        cout << "Alloy" << endl;
    }

    return 0;
}