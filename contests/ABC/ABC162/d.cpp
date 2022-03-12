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
    int N; string S;
    cin >> N >> S;

    vector<int> a(N);
    rep(i, 0, N) {
        if(S[i] == 'R') a[i] = 0;
        if(S[i] == 'G') a[i] = 1;
        if(S[i] == 'B') a[i] = 2;
    }
    vector<ll> cnt(3);
    rep(i, 0, N) cnt[a[i]]++;
    ll ans = 1;
    rep(i, 0, 3) ans *= cnt[i]; // 条件1
    rep(i, 0, N) rep(j, i, N) { // 条件2を満たさないもの
        int k = j + (j - i);
        if(k < N) {
            // 条件1を満たす, かつ条件2を満たさないものを除く
            if(a[i] == a[j]) continue;
            if(a[i] == a[k]) continue;
            if(a[j] == a[k]) continue;
            ans--;
        }
    }
    cout << ans << endl;

    return 0;
}