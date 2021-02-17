#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll A, B;
    ll X;
    cin >> A >> B >> X;

    ll u_b = 10000000001;
    ll l_b = 0;
    
    while(u_b - l_b > 1) {
        ll N = (u_b + l_b) / 2;
        ll dN = log10(N)+1;
        if(A * N + B * dN > X) u_b = N;
        else l_b = N;
    }

    cout << l_b << endl;
    return 0;
}