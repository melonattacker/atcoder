#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
using mint = modint1000000007;
// using Graph = vector<vector<int>>;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<vector<int>> col(N, vector<int>(N));
    int color = 0;
    rep(i, 0, N) {
        col[i][0] = color;
        color = 1-color; 
    }
    rep(i, 0, N) rep(j, 1, N) {
        col[i][j] = 1-col[i][j-1];
    }

    rep(i, 0, N*A) {
        rep(j, 0, N*B) {
            if(col[i/A][j/B] == 0) cout << ".";
            else cout << "#";
        }
        cout << endl;
    }

    return 0;
}