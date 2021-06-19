#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

ll comb(ll n, ll k) {
    ll ans = 1;
    for(int i = 1; i < k+1; i++){
        ans *= n + 1 - i;
        ans /= i;
    }
    return ans;
}

int main() {
    ll N;
    cin >> N;

    vector<ll> A(N);
    unordered_map<ll, ll> mp;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        mp[A[i]]++;
    }

    ll ans = 0;

    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        ans += comb(itr->second, 2);
    }

    cout << comb(N, 2) - ans << endl;

    return 0;
}