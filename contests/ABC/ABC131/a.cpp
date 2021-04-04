#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;

    bool is_exist = false;
    for(int i = 0; i < S.size()-1; i++) {
        if(S[i] == S[i+1]) is_exist = true;
    }

    if(is_exist) cout << "Bad" << endl;
    else cout << "Good" << endl;

    return 0;
}