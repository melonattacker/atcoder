#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;

    ll a_b = A + B;

    ll count = N / a_b;
    ll amari = N % a_b;

    ll ans = count * A;

    if(amari >= A) {
        ans += A;
    } else if(amari < A) {
        ans += amari;
    }

    cout << ans << endl;
    
    return 0;
}