#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

ll mod = 1000000007;

int main() {
    ll N, K;
    cin >> N >> K;

    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    ll B1 = 0, B2 = 0;

    // Aの転倒数をカウント
    rep(i, 0, N) {
        rep(j, i+1, N) {
            if(A[i] > A[j]) B1++;
        }
    }

    // ２つのAの間で発生する転倒数をカウント
    rep(i, 0, N) {
        rep(j, 0, N) {
            if (A[i] > A[j]) B2++;
        }
    }

    ll C1 = K;
    ll C2 = K * (K-1) / 2LL;
    C2 %= mod;

    cout << (B1*C1 + B2*C2) % mod << endl;

    return 0;
}