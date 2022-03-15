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
    string S, T;
    cin >> S >> T;

    map<char, int> mp1;
    map<char, int> mp2;
    vector<int> v1;
    vector<int> v2;
    rep(i, 0, S.size()) mp1[S[i]]++;
    rep(i, 0, T.size()) mp2[T[i]]++;
    for(auto p: mp1) v1.push_back(p.second);
    for(auto p: mp2) v2.push_back(p.second);
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    if(v1.size() != v2.size()) {
        cout << "No" << endl;
        return 0;
    }

    rep(i, 0, v1.size()) {
        if(v1[i] != v2[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}