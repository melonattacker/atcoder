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
    int N; string T;
    cin >> N >> T;

    int x = 0;
    int y = 0;
    int d = 0; // 0: x+, 1:x-, 2:y+, 3:y-
    rep(i, 0, N) {
        if(T[i] == 'S') {
            if(d == 0) x++;
            else if(d == 1) x--; 
            else if(d == 2) y++;
            else y--;
        } else {
            if(d == 0) d = 3;
            else if(d == 1) d = 2;
            else if(d == 2) d = 0;
            else d = 1;
        }
    }
    cout << x << " " << y << endl;
    return 0;
}