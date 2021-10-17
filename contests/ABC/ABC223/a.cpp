#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int X;
    cin >> X;

    if(X == 0) {
        cout << "No" << endl;
        return 0;
    }

    if(X % 100 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}