#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W));
    vector<vector<int>> B(W, vector<int>(H));
    
    rep(i, 0, H) rep(j, 0, W) {
        cin >> A[i][j];
    }    

    rep(i, 0, H) rep(j, 0, W) {
        B[j][i] = A[i][j];
    }

    rep(i, 0, W) {
        rep(j, 0, H) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}