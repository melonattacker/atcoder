#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int ac_minus = c % 2 == 1 && a < 0;
    int bc_minus = c % 2 == 1 && b < 0;

    // 符号が異なる
    if(ac_minus != bc_minus) {
        if(ac_minus) puts("<");
        else puts(">");
    // 符号が同じ
    } else {
        if(abs(a) == abs(b)) puts("=");
        else if(abs(a) < abs(b)) puts("<");
        else puts(">");
    }

    return 0;
}