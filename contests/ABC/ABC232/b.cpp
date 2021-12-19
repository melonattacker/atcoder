#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string caesar(string s, int shift) {
    string res = "";
    for(int i = 0; i < s.size(); i++) {
        int code = s[i];
        res += (code+shift-97)%26+97;
    }
    return res;
}

int main() {
    string S, T;
    cin >> S >> T;

    for(int i = 0; i < 26; i++) {
        string res = caesar(S, i);
        if(res == T) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}