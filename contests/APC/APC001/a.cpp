#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    for(int k = 0; k < n; k++) {
        int P, Q, a, b, c;
        cin >> P >> Q >> a >> b >> c;

        vector<int> p = {P, Q};
        vector<int> S;
        while(true) {
            p[0] = (a * p[0] + b) % c; 
            p[1] = (a * p[1] + b) % c; 
            // cout << kari << endl;
            bool ab = false, pb = false;
            for(int i = 0; i < S.size(); i++) {
                if(S[i] == p[0]) {
                    ab = true;
                } 
                if(S[i] == p[1]) {
                    pb = true;
                }
            }
            if(ab && pb) {
                cout << "Draw" << endl;
                break;
            } else if(ab) {
                cout << "Pany" << endl;
                break;
            } else if(pb) {
                cout << "Acom" << endl;
                break;
            }
            S.push_back(p[0]);
            S.push_back(p[1]);
            // for(int i = 0; i < S.size(); i++) {
            //     cout << S[i];
            // }
            // cout << endl;
        }
    }   
    return 0;
}