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
    int V, A, B, C;
    cin >> V >> A >> B >> C;
    vector<int> v(3);
    v[0] = A;
    v[1] = B;
    v[2] = C;
    while(true) {
        rep(i, 0, 3) {
            if(V - v[i] < 0) {
                if(i == 0) {
                    cout << "F" << endl;
                    return 0;
                } else if(i == 1) {
                    cout << "M" << endl;
                    return 0;
                } else {
                    cout << "T" << endl;
                    return 0;
                }
            }
            V -= v[i];
        }
    }

    return 0;
}