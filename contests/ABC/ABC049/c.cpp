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
    string S;
    cin >> S;

    unordered_map<int, vector<string>> mp;
    mp[5] = {"maerd", "esare"}; 
    mp[6] = {"resare"}; 
    mp[7] = {"remaerd"}; 

    string T = "";
    string s = "";
    for(int i = S.size()-1; i >= 0; i--) {
        s += S[i];
        if(s.size() == 5) {
            rep(j, 0, mp[5].size()) {
                if(s == mp[5][j]) {
                    T += s; 
                    s = ""; 
                }
            }
        }
        if(s.size() == 6) {
            rep(j, 0, mp[6].size()) {
                if(s == mp[6][j]) {
                    T += s; 
                    s = "";
                }
            }
        }
        if(s.size() == 7) {
            rep(j, 0, mp[7].size()) {
                if(s == mp[7][j]) {
                    T += s; 
                    s = "";
                }
            }
        }
    }

    reverse(S.begin(), S.end());
    if(S == T) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}