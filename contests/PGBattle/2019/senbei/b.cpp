#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    ll N, M, A, B, C;
    cin >> N >> M >> A >> B >> C;

    for(int x = 0; x < N; x++) {
        ll S = N - x;
        ll T = M - A * x;

        ll up = B * S - T;
        ll down = B - C;

        if(down == 0) {
            if(up == 0) {
                ll z = 0;
                ll y = N - x - z;
                cout << x << " " << y  << " " << z << endl;
                return 0;
            }
            continue;
        }

        if(up % down != 0) continue;

        ll z = up / down;

        if(0 <= z && z <= N - x) {
            ll y = N - x - z;
            cout << x << " " << y << " " << z << endl;
            return 0;
        }
    }

    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}