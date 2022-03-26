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
    int N;
    cin >> N;

    V<pair<int, int>> P(N);
    rep(i, 0, N) {
        int x, l;
        cin >> x >> l;
        P[i] = {x+l, x-l};
    }

    sort(P.begin(), P.end());
    int cur = -1000000000;
    int ans = 0;
    for(auto p: P) {
        if(cur <= p.second) { // かぶってなければ残す
            ans++;
            cur = p.first;
        }
    }

    cout << ans << endl;

    return 0;
}