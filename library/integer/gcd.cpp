// 2個以上の整数の最小公倍数を求めるコード
#include <iostream>
using namespace std;

int gcd(int x, int y) { return (x % y)? gcd(y, x % y): y; }

int main() {
    int n, a, b;
    cin >> n >> a;
    for (int i = 1; i < n; i++) {
    cin >> b;
    a = gcd(a, b);
    }
    cout << a;

    return 0;
}