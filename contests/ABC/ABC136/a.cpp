#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int ans = C - (A - B);
    if(ans < 0) {
        cout << 0 << endl;
    } else {
        cout << C - (A - B) << endl;
    }

    return 0;
}