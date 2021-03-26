#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y) { return (x % y)? gcd(y, x % y): y; }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    ll amount = 0;
    amount += B / C - (A-1) / C;
    amount += B / D - (A-1) / D;

    ll G = lcm(C, D);
    amount -= B / G - (A-1) / G;

    cout << B-A+1-amount << endl;

    return 0;
}