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
    int n;
    cin >> n;
    V<pair<ll, ll>> p(n);
    rep(i, 0, n) {
        ll a, b;
        cin >> a >> b;
        p[i] = {b, a};
    }
    sort(all(p));

    int l = 0;
    int ans = 0;
    for (const auto& item : p) {
		if (l < item.second) {
            ans++;
			l = item.first;
		}
	}

    cout << ans << endl;

    return 0;
}