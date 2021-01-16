#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    while(true) {
        C -= B;
        if(C <= 0) {
            cout << "Yes" << endl;
            break;
        }

        A -= D;
        if(A <= 0) {
            cout << "No" << endl;
            break;
        } 
    }

    return 0;
}