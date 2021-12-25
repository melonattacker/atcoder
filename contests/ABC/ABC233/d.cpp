#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    ll N, K;
    cin >> N >> K;

    vector<ll> A(N);
    vector<ll> B(N+1);

    rep(i, 0, N) cin >> A[i];
    rep(i, 0, N) B[i+1] = A[i] + B[i];
    unordered_map<ll, ll> mp;
    ll ans=0;
    rep(r, 1, N+1) {
        mp[B[r-1]]++; // B[r-1]をmpにメモる
        ans += mp[B[r]-K]; // B[l−1]=B[r]−Kより
    }

    cout << ans << endl;

    return 0;
}