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
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> red;
    rep(i, 0, m) cin >> a[i];
    a.push_back(n+1);
    sort(all(a));
    int mini = 202000;
    int pre = 1;
    rep(i, 0, m+1) {
        if(pre != a[i]) {
            red.push_back(a[i]-pre);
        }
        pre = a[i]+1;
    }
    if (red.size() == 0) {
        cout << 0 << endl;
        return 0;
    }
    sort(all(red));
    int ans = 0;
    for (int x : red) ans += (x+red[0]-1)/red[0];
    cout << ans << endl;

    return 0;
}