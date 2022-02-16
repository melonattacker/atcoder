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
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, 0, n) cin >> x[i] >> y[i];
    set<pair<int, int>> s;
    rep(i, 0, n) s.emplace(x[i], y[i]);
    int ans = 0;
    rep(i, 0, n) rep(j, 0, n) {
        int xi = x[i], xj = x[j];
        int yi = y[i], yj = y[j];
        if(xi < xj && yi < yj) { // 左下, 右上
            if(s.find({xi, yj}) == s.end()) continue; // 左上
            if(s.find({xj, yi}) == s.end()) continue; // 右下
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}