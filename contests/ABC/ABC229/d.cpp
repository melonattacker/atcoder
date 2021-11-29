#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s; cin >> s;
    ll k; cin >> k;
    ll n = s.size();

    vector<ll> cnt(n+1);
    for (ll i = 0; i <= n-1; i++)
    {
        // cnt[r] - cnt[l] で s[l,r) の '.' の数を表す
        if(s[i] == '.') cnt[i+1] = cnt[i] + 1;
        else cnt[i+1] = cnt[i];
    }
    
    ll ans = 0;
    ll r = 0;
    for(ll l = 0; l <= n-1; l++) {
        // rが区間内、かつ'.'を全て'X'に変えられる
        while(r <= n-1 && cnt[r+1]-cnt[l] <= k) {
            r = r+1;
        }
        ans = max(ans, r-l);
    }

    cout << ans << endl;

    return 0;
}