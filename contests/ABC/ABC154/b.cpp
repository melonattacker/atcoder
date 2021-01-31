#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;

    for(int i = 0; i < S.size(); i++) {
        S[i] = 'x';
    }

    cout << S << endl;

    return 0;
}