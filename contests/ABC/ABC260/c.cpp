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

int N, X, Y;


ll f(int n, bool is_red) {
    if(n==1) return is_red ? 0 : 1;
    if(is_red) {
        return f(n-1, true) + f(n, false) * X;
    } else {
        return f(n-1, true) + f(n-1, false) * Y;
    }
}

int main() {
    cin >> N >> X >> Y;
    cout << f(N, true) << endl;
    return 0;
}