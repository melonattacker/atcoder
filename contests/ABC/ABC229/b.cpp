#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll A, B;
    cin >> A >> B;

    ll C = A + B;

    string sA = to_string(A);
    string sB = to_string(B);
    string sC = to_string(C);

    int n = min(sA.size(), sB.size());

    for(int i = 0; i < n; i++) {
        char sc = sC[sC.size()-i-1];
        int cn = sc - '0';
        char sa = sA[sA.size()-i-1];
        int an = sa - '0';
        char sb = sB[sB.size()-i-1];
        int bn = sb - '0';

        if(an + bn > cn) {
            cout << "Hard" << endl;
            return 0;
        }
    }

    cout << "Easy" << endl;

    return 0;
}