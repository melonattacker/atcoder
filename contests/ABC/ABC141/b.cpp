#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;

    int count = 0;
    for(int i = 1; i <= S.size(); i++) {
        if(i % 2 == 0) {
            if(S[i-1] == 'L' || S[i-1] == 'U' || S[i-1] == 'D') count++;
        } else {
            if(S[i-1] == 'R' || S[i-1] == 'U' || S[i-1] == 'D') count++;
        }
    }

    if(count == S.size()) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}