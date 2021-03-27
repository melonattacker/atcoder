#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;

    char temp = S[0];
    S.erase(0, 1);
    S += temp;

    cout << S << endl;

    return 0;
}