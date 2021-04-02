#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    double W,H,x,y;
    cin >> W >> H >> x >> y;

    int is_some_exist = x + x == W && y + y == H ;
    cout << W * H / 2 << " " << is_some_exist << endl;

    return 0;
}