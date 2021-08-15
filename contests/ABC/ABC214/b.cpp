#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int S, T;
    cin >> S >> T;

    ll ans = 0;

    for(int i = 0; i <= S; i++) {
        for(int j = 0; j <= S; j++) {
            for(int k = 0; k <= S; k++) {
                if(i + j + k <= S && i * j * k <= T) ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}