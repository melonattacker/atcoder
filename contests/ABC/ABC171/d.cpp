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
    int N, Q;
    cin >> N;
    V<ll> A(N);
    V<int> cnt(101000);
    ll s = 0;
    rep(i, 0, N) {
        cin >> A[i];
        s += A[i];
        cnt[A[i]]++;
    }
    cin >> Q;
    V<ll> B(Q);
    V<ll> C(Q);
    rep(i, 0, Q) cin >> B[i] >> C[i];

    rep(i, 0, Q) {
        s += C[i]*cnt[B[i]];
        s -= B[i]*cnt[B[i]];
        cout << s << endl;
        cnt[C[i]] += cnt[B[i]];
        cnt[B[i]] = 0;
    }

    return 0;
}