#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll A, B, K;
    cin >> A >> B >> K;

    ll eat = A - K;

    if(A - K >= 0) {
        cout << A - K << " " << B << endl;
    } else if(A - K < 0) {
        if(B - (K - A) >= 0) {
            cout << 0 << " " << B - (K - A) << endl;
        } else {
            cout << 0 << " " << 0 << endl;
        }
    }

    return 0;
}