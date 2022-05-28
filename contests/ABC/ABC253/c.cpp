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
    int Q; cin >> Q;

    unordered_map<int, int> mp;
    priority_queue<int> mx;
    priority_queue<int,vector<int>,greater<int>> mi;
    rep(i, 0, Q) {
        int q; cin >> q;
        if(q == 1) {
            int x; cin >> x;
            if(mp[x] == 0) mx.push(x);
            if(mp[x] == 0) mi.push(x);
            mp[x]++;
        } else if(q == 2) {
            int x, c; cin >> x >> c;
            mp[x] -= min(c, mp[x]);
            if(mp[x] == 0 and mx.size() > 0 and mi.size() > 0) {
                if(x == mx.top()) mx.pop();
                if(x == mi.top()) mi.pop();
            } 
        } else if(q == 3) {
            while(mp[mx.top()] == 0) mx.pop();
            while(mp[mi.top()] == 0) mi.pop();
            cout << mx.top()-mi.top() << endl;
        }
    }
    return 0;
}