#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int X;
    cin >> X;

    int fh_num = 0;
    int f_num = 0;

    while(true) {
        if(X >= 500) {
            X -= 500;
            fh_num++;

        } else if(X >= 5 && X < 500) {
            X -= 5;
            f_num++;
        } else {
            break;
        }
    }

    cout << 1000 * fh_num + 5 * f_num << endl;

    return 0;
}