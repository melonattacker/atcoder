#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;

    int cnt = 0;

    if(S[0] == 'A') cnt++;

    string kiridashi = S.substr(2, S.size()-3);

    int c_cnt = 0;

    for(int i = 0; i < kiridashi.size(); i++) {
        if(kiridashi[i] == 'C') c_cnt++;
    }

    if(c_cnt == 1) cnt++;

    int l_cnt = 0;

    for(int i = 0; i < S.size(); i++) {
        int code = S[i];
        if(code == 65 || code == 67 || 97 <= code && code <= 122) l_cnt++;
    }

    if(l_cnt == S.size()) cnt++;

    if(cnt == 3) cout << "AC" << endl; 
    else cout << "WA" << endl;

    return 0;
}