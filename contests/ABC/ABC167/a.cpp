#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    T.pop_back();

    if(S == T) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}