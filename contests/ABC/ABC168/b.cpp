#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    string S;
    cin >> K >> S;

    if((int) S.size() <= K) {
        cout << S << endl;
    } else {
        cout << S.substr(0, K) + "..." << endl;
    }

    return 0;
}