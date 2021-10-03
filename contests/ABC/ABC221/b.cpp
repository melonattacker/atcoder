#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string S, T;
    cin >> S >> T;

    if(S == T) {
        cout << "Yes" << endl;
        return 0;
    }

    for(int i = 0; i < S.size()-1; i++) {
        string s = S;
        char kari = s[i];
        s[i] = s[i+1];
        s[i+1] = kari; 

        if(s == T) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}