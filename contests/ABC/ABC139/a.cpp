#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S, T;
    cin >> S >> T;

    int ans = 0;

    for(int i = 0; i < 3; i++) {
        if(S[i] == T[i]) ans++;
    }

    cout << ans << endl;

    return 0;
}