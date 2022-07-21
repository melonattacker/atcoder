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

mint comb(int n, int k) {
    mint ans = 1;
    for(int i = 1; i < k+1; i++){
        ans *= n + 1 - i;
        ans /= i;
    }
    return ans;
}

int main() {
    int x, y;
    cin >> x >> y;
    rep(a, 0, x+1) {
        int b = x-a;
        if(b % 2 == 1) continue;
        b /= 2;
        if(2*a+b == y) {
            cout << comb(a+b, a).val() << endl;
            return 0;
        } 
    }

    cout << 0 << endl;

    return 0;
}