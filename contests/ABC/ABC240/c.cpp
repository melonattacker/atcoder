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
    int n, x;
    cin >> n >> x;
    V<int> a(n), b(n);
    rep(i, 0, n) cin >> a[i] >> b[i];
    
    V<V<bool>> dp(n + 1, V<bool>(x + 1, false)); // i 回ジャンプを行なった時点で座礁 j にいることが可能なら1, 不可能なら0
    dp[0][0] = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= x; ++j) {
            if (dp[i][j]) {
                if (j + a[i] <= x) dp[i+1][j+a[i]] = true;
                if (j + b[i] <= x) dp[i+1][j+b[i]] = true;
            }
        }
    }

    if(dp[n][x]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}