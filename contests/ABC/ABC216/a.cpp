#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string S;
    cin >> S;

    string X = "";
    string Y = "";
    bool already = false;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == '.') {
            already = true;
            continue;
        }
        if(!already) {
            X += S[i];
        } else {
            Y += S[i];
        }
    }

    if(0 <= stoi(Y) && stoi(Y) <= 2) {
        cout << X + "-" << endl;
    } else if(3 <= stoi(Y) && stoi(Y) <= 6) {
        cout << X << endl;
    } else if(7 <= stoi(Y) && stoi(Y) <= 9) {
        cout << X + "+" << endl;
    }

    return 0;
}