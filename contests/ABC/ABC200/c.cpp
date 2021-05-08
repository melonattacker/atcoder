#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll comb(ll n, ll k) {
    ll ans = 1;
    for(ll i = 1; i < k+1; i++){
        ans *= n + 1 - i;
        ans /= i;
    }
    return ans;
}

int main() {
    ll N;
    cin >> N;

    unordered_map<ll, ll> mp;

    for(int i = 0; i < N; i++) {
        ll a;
        cin >> a;
        ll amari = a % 200;
        mp[amari]++;
    }

    ll ans = 0;

    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        ans += comb(itr->second, 2);
    }

    cout << ans << endl;

    return 0;
}