#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll A, B, C;
    cin >> A >> B >> C;

    ll num = gcd(A, gcd(B, C));

    cout << (A / num - 1) + (B / num - 1) + (C / num - 1) << endl;

    return 0;
}