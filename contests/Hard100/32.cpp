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

const ll MOD = 1e9+7;

int main() {
    int N;
    cin >> N;

    vector<ll> pw(N+1);

    // N!がどの素因数で何回割れるか
    for(int i = 2; i <= N; i++) {
        int ii = i;
        for(int j = 2; j*j <= ii; j++) {
            while(ii % j == 0) {
                ii /= j;
                pw[j]++;
            }
        }
        if (ii != 1) {
            pw[ii]++;
        }
    }

    // N!の約数の個数
    ll ans = 1;
    for(int j = 0; j <= N; j++) {
        ans = (ans * (pw[j] + 1)) % MOD;
    }
    cout << ans << endl;

    return 0;
}