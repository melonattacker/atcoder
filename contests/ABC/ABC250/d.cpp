#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
using mint = modint1000000007;
using Graph = vector<vector<int>>;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    const int M = 1e6;
    vector<bool> isP(M+1, true);
    vector<int> primes;
    isP[0] = isP[1] = false;
    for(int i = 2; i <= M; i++) {
        if(!isP[i]) continue;
        primes.push_back(i);
        for(ll j = (ll)i*i; j <= M; j += i) {
            isP[j] = false;
        }
    }

    vector<int> s(M+1);
    for(int p: primes) s[p] = 1;
    rep(i, 0, M) s[i+1] += s[i];

    ll n; cin >> n;
    ll ans = 0;
    for(int q: primes) {
        int r = min<ll>(n/q/q/q, q-1);
        ans += s[r];
    }

    cout << ans << endl;

    return 0;
}