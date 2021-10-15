#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    ll N;
    cin >> N;

    ll ans = 2;

    for(int i = 0; i < N-1; i++) {
        ans *= 2;
    }
    cout << "0.";
    for(int i = 0; i < N-1; i++) {
        cout << "0";
    }
    cout << ans << endl;
    return 0;
}