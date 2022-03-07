#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
// using mint = modint1000000007;
using Graph = vector<vector<int>>;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

typedef atcoder::modint998244353 mint;
mint dp[1001000][10];

int main() {
    int N;
    cin >> N;
    rep(j, 1, 10) dp[0][j] = 1;
    rep(i, 0, N) {
        rep(j, 1, 10) {
            if(j + 1 != 10) dp[i+1][j] += dp[i][j+1];
            if(j - 1 != 0) dp[i+1][j] += dp[i][j-1];
            dp[i+1][j] += dp[i][j];
        }
    }
    mint ans = 0;
    rep(j, 1, 10) {
        ans += dp[N-1][j].val();
    }
    cout << ans.val() << endl;

    return 0;
}