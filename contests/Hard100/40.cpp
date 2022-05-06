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
    string s;
    cin >> s;

    list<char> lst;
    rep(i, 0, s.size()) lst.push_back(s[i]);
    int ans = 0;
    
    while(lst.size() > 1) {
        if(lst.front() == lst.back()) lst.pop_front(), lst.pop_back();
        else {
            if(lst.front() == 'x') {
                lst.push_back('x');
                ans++;
                continue;
            }
            if(lst.back() == 'x') {
                lst.push_front('x');
                ans++;
                continue;
            }
            if(lst.front() != 'x' and lst.back() != 'x') {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << ans << endl;

    return 0;
}