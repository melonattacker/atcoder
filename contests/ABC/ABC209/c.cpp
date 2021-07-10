#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

ll MOD = 1000000007; 

int main() {
    ll N;
    cin >> N;

    vector<ll> C(N);

    for(int i = 0; i < N; i++) {
        cin >> C[i];
    }

    sort(C.begin(), C.end());

    ll ans = 1;

    for(int i = 0; i < N; i++) {
        ll kari = ans * (C[i]-i) % MOD;
        ans = kari;
    }

    cout << ans << endl;

    return 0;
}