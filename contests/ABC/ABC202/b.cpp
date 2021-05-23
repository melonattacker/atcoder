#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;


    string ans = "";
    for(int i = S.size()-1; i >= 0; i--) {
        char c = S[i];
        int num = c - '0';

        if(num == 0) {
            ans += "0";
        } else if (num == 1) {
            ans += "1";
        } else if (num == 6) {
            ans += "9";
        } else if (num == 8) {
            ans += "8";
        } else if (num == 9) {
            ans += "6";
        } 
    }

    cout << ans << endl;

    return 0;
}