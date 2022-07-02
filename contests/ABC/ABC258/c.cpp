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
    int N, Q;
    string S;
    cin >> N >> Q >> S;

    int top = 0;
    rep(i, 0, Q) {
        int t, x; 
        cin >> t >> x;

        if(t == 1) {
            top -= x;
            top %= N;
        } else if(t == 2) {
            // cout << (top+x-1+N)%N << endl;
            cout << S[(top+x-1+N)%N] << endl;
        }
    }

    return 0;
}