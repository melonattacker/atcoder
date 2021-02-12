#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A1, A2, A3;
    cin >> A1 >> A2 >> A3;

    if(A1 + A2 + A3 >= 22) {
        cout << "bust" << endl;
    } else {
        cout << "win" << endl;
    }

    return 0;
}