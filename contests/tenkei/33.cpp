#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    int H, W;
    cin >> H >> W;

    if (H == 1 || W == 1) cout << H * W << endl;
    else cout << ((H + 1) / 2) * ((W + 1) / 2) << endl;

    return 0;
}