#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int x, y;
    cin >> x >> y;

    if(x == y) {
        cout << x << endl;
    } else {
        cout << 3 - x - y << endl;
    }
    return 0;
}