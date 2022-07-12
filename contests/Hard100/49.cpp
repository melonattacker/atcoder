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

// 繰り返し2乗法 O(logn)
mint f(int n) { 
    if(n == 0) return 1;
    mint x = f(n/2);
    x *= x;
    if(n%2 == 1) x *= 2;
    return x;
}

mint choose(int n, int a) {
    mint x = 1, y = 1;
    rep(i, 0, a) {
        x *= n-i;
        y *= i+1;
    }
    return x/y;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    mint ans = f(n); // O(logn)
    ans -= 1;
    ans -= choose(n, a);
    ans -= choose(n, b);
    cout << ans.val() << endl;

    return 0;
}