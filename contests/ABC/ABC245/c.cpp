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
    ll N, K;
    cin >> N >> K;

    V<ll> A(N);
    V<ll> B(N);
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, N) cin >> B[i];

    vector<vector<bool>> dp(N+2, vector<bool>(2));

    dp[0][0] = true;
    dp[0][1] = true;

    bool is_ok = true;
    rep(i, 0, N) {
        if(abs(A[i]-A[i+1]) <= K) dp[i+1][0] = dp[i+1][0] || dp[i][0];
        if(abs(B[i]-A[i+1]) <= K) dp[i+1][0] = dp[i+1][0] || dp[i][1];
        if(abs(A[i]-B[i+1]) <= K) dp[i+1][1] = dp[i+1][1] || dp[i][0];
        if(abs(B[i]-B[i+1]) <= K) dp[i+1][1] = dp[i+1][1] || dp[i][1];
    }

    if(dp[N-1][0] || dp[N-1][1]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}