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

auto RLE(string S) {
    V<pair<char, int>> ret;
    char color = S[0];
    int cnt = 0;
    for(auto c: S) {
        if(color == c) cnt++;
        else {
            ret.push_back({color, cnt});
            color = c;
            cnt = 1;
        }
    }
    ret.push_back({color, cnt});
    return ret;
}

int main() {
    string S, T;
    cin >> S >> T;
    
    auto s = RLE(S);
    auto t = RLE(T);

    if(s.size() != t.size()) {
        cout << "No" << endl;
        return 0;
    }

    for(int i = 0; i < s.size(); i++) {
        auto x = s[i].first;
        auto a = s[i].second;
        auto y = t[i].first;
        auto b = t[i].second;
        if(!(x == y and (a == b or (a >= 2 and a <= b)))) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}