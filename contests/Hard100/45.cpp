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

vector<int> makeBitPrimes(int n) {
    vector<int> v(n + 1, 1);v[0] = v[1] = 0;
    rep(i, 2, sqrt(n)) if (v[i]) for (int j = 0; i * (j + 2) < n; j++) v[i * (j + 2)] = 0;return v;}

int A[101010], B[101010];

int main() {
    auto ps = makeBitPrimes(101010);
    rep(i, 1, 101010) if (ps[i] and ps[(i + 1) / 2]) A[i] = 1;
    rep(i, 1, 101010) B[i] = B[i - 1] + A[i];

    int Q; cin >> Q;
    rep(q, 0, Q) {
        int l, r; cin >> l >> r;
        cout << B[r]-B[l-1] << endl;
    }
    return 0;
}