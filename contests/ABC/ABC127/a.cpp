#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A, B;
    cin >> A >> B;

    if(A >= 13) {
        cout << B << endl;
    } else if(6 <= A && A <= 12) {   
        cout << B/2 << endl;
    } else if(A <= 5) {
        cout << 0 << endl;
    }

    return 0;
}