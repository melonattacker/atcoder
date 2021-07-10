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

    if(A > B) {
        cout << 0 << endl;
        return 0;
    } 
    cout << B-A+1 << endl;
    return 0;
}