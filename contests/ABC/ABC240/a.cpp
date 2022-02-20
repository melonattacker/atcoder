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
    int a, b;
    cin >> a >> b;
    
    if(a == 1 && b == 2) {
        cout << "Yes" << endl;
    } else if(a == 2 && b == 3) {
        cout << "Yes" << endl;
    } else if(a == 3 && b == 4) {
        cout << "Yes" << endl;
    } else if(a == 4 && b == 5) {
        cout << "Yes" << endl;
    } else if(a == 5 && b == 6) {
        cout << "Yes" << endl;
    } else if(a == 6 && b == 7) {
        cout << "Yes" << endl;
    } else if(a == 7 && b == 8) {
        cout << "Yes" << endl;
    } else if(a == 8 && b == 9) {
        cout << "Yes" << endl;
    } else if(a == 9 && b == 10) {
        cout << "Yes" << endl;
    } else if(a == 1 && b == 10) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}