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
    int n, q;
    cin >> n >> q;
    vector<int> front(n, -1);
    vector<int> back(n, -1);
    rep(qi, 0, q) {
        int type;
        cin >> type;
        if(type == 3) {
            int x; 
            cin >> x;
            --x;
            while(front[x] != -1) x = front[x];;
            vector<int> ans = {x+1};
            while(back[x] != -1) {
                x = back[x];
                ans.push_back(x+1);
            }
            cout << ans.size() << " ";
            rep(i, 0, ans.size()) cout << ans[i] << " ";
            cout << endl;
        } else {
            int x, y; 
            cin >> x >> y;
            --x, --y;
            if(type == 1) {
                back[x] = y;
                front[y] = x;
            } else {
                back[x] = -1;
                front[y] = -1;
            }
        }
    }

    return 0;
}