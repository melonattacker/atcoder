#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int n, k; cin >> n >> k;
    vector<ll> v(n);

    for(ll &x : v) cin >> x;
    ll ok = 0, ng = 1e18 / k;
    while(ng - ok > 1){
        ll md = (ok + ng) / 2, sum = 0;
        for(ll x : v) sum += min(x, md);
        if(sum >= k * md) ok = md;
        else ng = md;
    }
    cout << ok << endl;

    return 0;
}