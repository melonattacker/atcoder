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
    V<pair<int,int>> query;
    rep(i, 0, n) {
        int l, r;
        cin >> l >> r;
        query.push_back({l, 0});
        query.push_back({r, 1});
    }
    sort(query.begin(), query.end());

    int cnt = 0;
    for(auto q: query) {
        if(q.second == 0) {
            if(cnt == 0) cout << q.first << ' ';
            cnt++;
        } else {
            cnt--;
            if(cnt == 0) cout << q.first << endl;
        }
    }

    return 0;
}