#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S1, S2;
    cin >> S1 >> S2;

    if(S1[0] == '#') {
        if(S2[0] == '#' || S1[1] == '#') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if(S1[1] == '#') {
        if(S1[0] == '#' || S2[1] == '#') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if(S2[0] == '#') {
        if(S1[0] == '#' || S2[1] == '#') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if(S2[1] == '#') {
        if(S2[0] == '#' || S1[1] == '#') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}