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
    string S;
    cin >> S;

    int black = 0, white = 0;
    rep(i, 0, N) {
        if(S[i] == '#') black++;
        else white++;
    }

    int n_black = 0, n_white = 0;
    int ans = inf;
    chmin(ans, n_black+(white-n_white));
    rep(i, 0, N) {
        if(S[i] == '#') n_black++;
        else n_white++;
        chmin(ans, n_black+(white-n_white));
    }

    cout << ans << endl;

    return 0;
}