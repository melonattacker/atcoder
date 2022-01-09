#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }


V<ll> A(101010);
V<ll> B(101010);


ll get(int l, int r) { // [l,r]
	ll res = B[r];
	if (0 < l) res -= B[l - 1];
	return res;
}

int main() {
    ll N, K;
    cin >> N >> K;

    rep(i, 0, N) cin >> A[i];
    B[0] = A[0];
    rep(i, 1, N) B[i] = B[i-1] + A[i];

    ll ans = 0;
    int r = 0;
    rep(l, 0, N) {
        chmax(r, l);
        while(r < N and get(l, r) < K) r++;
        ans += N - r;
    }

    cout << ans << endl;

    return 0;
}