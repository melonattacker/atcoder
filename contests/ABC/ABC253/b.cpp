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
    int H, W;
    cin >> H >> W;

    V<string> S(H);
    rep(i, 0, H) cin >> S[i];

    int ax, ay, bx, by;
    int cnt = 0;
    rep(i, 0, H) rep(j, 0, W) {
        if(cnt == 0 and S[i][j] == 'o') {
            ay = i; 
            ax = j; 
            cnt++;
            continue;
        }
        if(cnt == 1 and S[i][j] == 'o') {
            by = i; 
            bx = j;
        }
    }

    cout << abs(bx-ax)+abs(by-ay) << endl;

    return 0;
}