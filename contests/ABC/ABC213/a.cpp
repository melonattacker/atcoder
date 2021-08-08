#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int A, B;
    cin >> A >> B;

    for(int C = 0; C <= 255; C++) {
        bitset<32> b1(A^C);
        bitset<32> b2(B);
        if(b1 == b2) {
            cout << C << endl;
            return 0;
        }
    }

    return 0;
}