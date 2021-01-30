#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if(C == 0) {
        while(true) {
            A--;
            if(A == 0) {
                cout << "Aoki" << endl;
                return 0;
            }
            B--;
            if(B == 0) {
                cout << "Takahashi" << endl;
                return 0;
            }
        }
    } else {
        while(true) {
            B--;
            if(B == 0) {
                cout << "Takahashi" << endl;
                return 0;
            }
            A--;
            if(A == 0) {
                cout << "Aoki" << endl;
                return 0;
            }
        }
    }

    return 0;
}