#include <iostream>
using namespace std;

int gcd(int x, int y) { return (x % y)? gcd(y, x % y): y; }

int gcdThreeArg(int a, int b, int c) {
    a = gcd(a, b);
    a = gcd(a, c);

    return a;
}

int main() {
    int K;
    cin >> K;

    int ans = 0;

    for (int a = 1; a < K + 1; a++) {
        for (int b = 1; b < K + 1; b++) {
            for (int c = 1; c < K + 1; c++) {
                ans += gcdThreeArg(a, b, c);
            }
        }
    }

    cout << ans << endl;

    return 0;
}