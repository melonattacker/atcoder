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
    int N; cin >> N;
    V<int> X(N);
    V<int> Y(N);
    rep(i, 0, N) cin >> X[i] >> Y[i];
    string S; cin >> S;

    unordered_map<int, priority_queue<int>> lmp; // 降順
    unordered_map<int, priority_queue<int,vector<int>,greater<int>>> rmp; // 昇順

    rep(i, 0, N) {
        if(S[i] == 'L') {
            lmp[Y[i]].push(X[i]);
        } else {
            rmp[Y[i]].push(X[i]);
        }
    }

    bool ok = false;
    rep(i, 0, N) {
        if(S[i] == 'L') {
            if(rmp[Y[i]].empty()) continue;
            if(X[i] > rmp[Y[i]].top()) ok = true;
        } else {
            if(lmp[Y[i]].empty()) continue;
            if(X[i] < lmp[Y[i]].top()) ok = true;
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}