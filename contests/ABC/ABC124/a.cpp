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

    int ans = 0;

    for(int i = 0; i < 2; i++) {
        if(A > B) {
            ans += A;
            A--;
        } else {
            ans += B;
            B--;
        }
    }

    cout << ans << endl;

    return 0;
}