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
    int N = 3;
    vector<pair<int, int>> v(N);

    map<int, int> xmp;
    map<int, int> ymp;

    rep(i, 0, N) {
        int x, y;
        cin >> x >> y;
        xmp[x]++;
        ymp[y]++;
    }

    for(auto x: xmp) {
        if(x.second == 1) {
            cout << x.first << " ";
        }
    }

    for(auto y: ymp) {
        if(y.second == 1) {
            cout << y.first << " ";
        }
    }
    cout << endl;

    return 0;
}