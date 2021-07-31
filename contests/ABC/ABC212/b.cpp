#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    string S;
    cin >> S;
    vector<int> X(4);

    for(int i = 0; i < 4; i++) {
        X[i] = S[i] - '0';
    }

    bool jouken1 = true;
    for(int i = 0; i < 3; i++) {
        if(X[i] != X[i+1]) jouken1 = false;
    }

    if(jouken1) {
        cout << "Weak" << endl;
        return 0;
    }

    bool jouken2 = true;
    for(int i = 0; i < 3; i++) {
        if(X[i] == 9) {
            if(X[i+1] != 0) jouken2 = false;
        } else {
            if(X[i]+1 != X[i+1]) jouken2 = false;
        }
    }

    if(jouken2) {
        cout << "Weak" << endl;
        return 0;
    }

    cout << "Strong" << endl;
    return 0;
}