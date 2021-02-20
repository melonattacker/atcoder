#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;

    bool is_ok = true;
    for(int i = 1; i <= S.size(); i++) {
        char c = S[i-1];
        if(i % 2 == 0) {
            if(!(c >= 65 && 90 >= c)) {
                is_ok = false;
            }
        } else {
            if(!(c >= 97 && 122 >= c)) {
                is_ok = false;
            }
        }
    }

    if(is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}