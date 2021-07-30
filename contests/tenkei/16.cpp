#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 200000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    ll N, A, B, C;
    cin >> N >> A >> B >> C;

    ll ans = INF;

    for(int i = 0; i <= 9999; i++) {
        for(int j = 0; j <= 9999 - i; j++) {
            ll V = N - 1LL * i * A - 1LL * j * B;
            ll R = 1LL * i + 1LL * j + V / C;
            if (V % C != 0LL || V < 0 || R > 9999LL) continue;
            ans = min(ans, R);
        }
    }

    cout << ans << endl;
    
    return 0;
}