#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int H, A;
    cin >> H >> A;

    int times = H / A;
    int amari = H % A;
    if(amari != 0) {
        times++;
    }

    cout << times << endl;

    return 0;
}