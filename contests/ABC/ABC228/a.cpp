#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    double S, T, X;
    cin >> S >> T >> X;

    bool ok = false;

    X += 0.5;

    if(S < T) {
        if(S <= X && X <= T) ok = true;
    } else {
        if(!(T <= X && X <= S)) ok = true;
    }

    if(ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}