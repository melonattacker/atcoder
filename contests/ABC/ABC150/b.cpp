#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int ans = 0;

    for(int i = 0; i < N-2; i++) {
        if(S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C')  ans++;
    }

    cout << ans << endl;

    return 0;
}