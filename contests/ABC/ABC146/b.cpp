#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    string S;
    cin >> N >> S;

    string ans = "";
    for(int i = 0; i < S.size(); i++) {
        char c;
        if(S[i] + N > 90) {
            c = 65 + (S[i] + N - 90 - 1);
        } else {
            c = S[i] + N;
        }
        ans += c;
    }

    cout << ans << endl;

    return 0;
}