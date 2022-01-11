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

int cnt[101010];
int MOD = 998244353;

int main() {
    int N;
    cin >> N;

    V<int> D(N);

    rep(i, 0, N) cin >> D[i];

    if(D[0] != 0) {
        cout << "0" << endl;
        return 0;
    }

    int maxD = 0;
    rep(i, 0, N) chmax(maxD, D[i]);
    rep(i, 0, N) ++cnt[D[i]];
    if(cnt[0] != 1) {
        cout << "0" << endl;
        return 0;
    }

    ll ans = 1;
    rep(i, 1, maxD+1) rep(j, 0, cnt[i]) {
        ans = ans * cnt[i-1] % MOD;
    }

    cout << ans << endl;

    return 0;
}