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

string grp[101010];

int main() {
    int N, K, R, S, P;
    string T;
    cin >> N >> K >> R >> S >> P >> T;
    rep(i, 0, N) grp[i%K] += T[i];

    int ans = 0;
    rep(k, 0, K) {
        int r = 0, s = 0, p = 0; // i番目まで手が決まっていて最後の手がlstであるときの最大得点
        if(grp[k][0] == 'r') p = P;
        if(grp[k][0] == 's') r = R;
        if(grp[k][0] == 'p') s = S;

        int n = grp[k].size();

        rep(i, 1, n) {
            int rr = max(s, p); // K回前で出す可能性のある手の中で最高得点を求める
            int ss = max(r, p); // ..
            int pp = max(r, s); // ..
            if(grp[k][i] == 'r') pp += P; 
            if(grp[k][i] == 's') rr += R;
            if(grp[k][i] == 'p') ss += S;

            r = rr;
            s = ss;
            p = pp;
        }

        ans += max({r, s, p});
    }

    cout << ans << endl;
    
    return 0;
}