#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A, B;
    cin >> A >> B;

    if(A <= B * 2) {
        cout << 0 << endl;
    } else {
        cout << A - B * 2 << endl;
    }
    return 0;
}