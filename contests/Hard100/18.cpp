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
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    int dx=tx-sx, dy=ty-sy;

    cout << string(dy, 'U') << string(dx, 'R'); 
    cout << string(dy, 'D') << string(dx, 'L'); 
    cout << 'L' << string(dy+1, 'U') << string(dx+1, 'R') << 'D';
    cout << 'R' << string(dy+1, 'D') << string(dx+1, 'L') << 'U';
    cout << endl;

    return 0;
}