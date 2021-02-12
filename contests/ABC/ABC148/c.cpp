#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y) { return (x % y)? gcd(y, x % y): y; }

ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

int main() {
    ll A, B;
    cin >> A >> B;

    cout << lcm(A, B) << endl;

    return 0;
}