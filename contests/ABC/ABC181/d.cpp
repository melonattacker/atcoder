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

bool solve(string s) {
    if(s.size() == 1) return s == "8";
    if(s.size() == 2) {
        if(stoi(s) % 8 == 0) return 1;
        swap(s[0], s[1]);
        return stoi(s) % 8 == 0;
    }
    vector<int> cnt(10);
    rep(i, 0, s.size()) cnt[s[i]-'0']++;
    for(int i = 112; i < 1000; i += 8){
        auto c = cnt;
        for(char x : to_string(i)) c[x - '0']--;
        if(all_of(c.begin(), c.end(), [](int x){ return x >= 0; })) return 1;
    }
    return 0;
}

int main() {
    string s;
    cin >> s;
    puts(solve(s) ? "Yes" : "No");
}