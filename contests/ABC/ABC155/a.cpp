#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if(A != B && B != C && A == C) {
        cout << "Yes" << endl;

    } else if(A == B && B != C && A != C) {
        cout << "Yes" << endl;

    } else if(A != B && B == C && A != C) {
        cout << "Yes" << endl;

    } else {
        cout << "No" << endl;
    }

    return 0;
}