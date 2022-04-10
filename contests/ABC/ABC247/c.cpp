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

int N;

vector<int> col(int n) {
    if (n == 1) return {1};
    else {
        vector<int> a = col(n-1);
        vector<int> b = col(n-1);
        a.push_back(n);
        a.insert(a.end(), b.begin(), b.end());
        return a;
    }
}

int main() {
    cin >> N;
    vector<int> res = col(N);
    rep(i, 0, res.size()) cout << res[i] << " ";
    cout << endl;

    return 0;
}