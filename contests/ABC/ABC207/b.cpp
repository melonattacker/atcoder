#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    ll mizu = A;
    ll aka = 0;
    int ans = 0;

    while(true) {
        if(mizu <= aka * D) {
            break;
        }

        if(ans > 10000000) {
            cout << -1 << endl;
            return 0;
        }
        ans++;
        mizu += B;
        aka += C;
    }

    cout << ans << endl;

    return 0;
}