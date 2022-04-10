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
    ll n; cin >> n;
    deque<pair<int, int>> q;

    rep(i, 0, n) {
        int k; cin >> k;
        if(k == 1) {
            int x, c; cin >> x >> c;
            q.push_back({x, c});
        } else {
            int c; cin >> c;
            ll sum = 0;
            while(c > 0) {
                int cnt = min(c, q.front().second);
                c -= cnt;
                sum += 1LL * cnt * q.front().first;
                q.front().second -= cnt;
                if(q.front().second <= 0) q.pop_front();
            }
            cout << sum << endl;
        }   
    }

    return 0;
}