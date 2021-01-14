#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int S, W;
    cin >> S >> W;

    if(S <= W) {
        cout << "unsafe" << endl;
    } else {
        cout << "safe" << endl;
    }

    return 0;
}