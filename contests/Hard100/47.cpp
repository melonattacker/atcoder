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
    int k;
    cin >> k;

    V<ll> a;
    rep(i, 1, 10) a.push_back(i);

    while(true) {
        // 出力パート
        if(k <= a.size()) {
            cout << a[k-1] << endl;
            return 0;
        }
        k -= a.size();
        // 列挙パート
        V<ll> old;
        swap(old, a);
        for(ll x: old) {
            for(int i = -1; i <= 1; i++) {
                int d = x%10+i;
                if(d < 0 || d > 9) continue;
                ll nx = x*10+d;
                a.push_back(nx);
            }
        }
    }

    return 0;
}