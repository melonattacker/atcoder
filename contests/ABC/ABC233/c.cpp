#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

ll ans = 0;
ll n,x;
vector<vector<ll>> a;
void dfs(ll pos, ll seki) {
    if(pos == n) {
        if(seki == x) ans++;
        return;
    }
    for(ll c: a[pos]) {
        if(seki > x/c) continue;
        dfs(pos+1, seki*c);
    }
}

int main() {
    cin >> n >> x;
    a.resize(n);
    for(ll i = 0; i < n; i++) {
        ll L; cin >> L;
        a[i].resize(L);
        for(int j = 0; j < L; j++) cin >> a[i][j]; 
    }
    dfs(0,1);
    cout << ans << endl;
    return 0;
}