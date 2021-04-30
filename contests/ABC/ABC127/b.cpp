#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int r, D, x2000;
    cin >> r >> D >> x2000;

    for(int i = 0; i < 10; i++) {
        int x = r * x2000 - D;
        x2000 = x;
        cout << x << endl;
    }

    return 0;
}