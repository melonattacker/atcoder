#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;

    long long amari = N % K;
    long long amari_op = K - amari;

    cout << min(amari, amari_op) << endl;

    return 0;
}