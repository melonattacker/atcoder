#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int ans = 0;

    for(int i = 0; i < N-1; i++) {
        if(S[i] != S[i+1]) ans++; 
    }

    cout << ans + 1 << endl;

    return 0;
}