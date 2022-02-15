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
    ll n;
    cin >> n;
    ll n2 = n*2;
    int ans = 0;
    auto check = [&](ll l) {
        ll tmp = n2/l-l+1;
        if(abs(tmp)%2 == 0) ++ans;
    };
    for (ll x = 1; x*x <= n2; x++) {
        if(n2 % x != 0) continue;
        ll y = n2/x;
        check(x);
        if(x != y) check(y);
    }
    cout << ans << endl;

    return 0;
}