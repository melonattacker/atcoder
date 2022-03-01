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
    int n, cnt;
    bool ans = false;
    vector<string> a;
    cin >> n;

    rep(i, 0, n) {
        string s;
        cin >> s;
        a.push_back(s);
    }

    rep(i, 0, n) rep(j, 0, n) {
        // 縦の探索
        if((i + 5) < n) {
            cnt = 0;
            rep(k, 0, 6) if(a[i+k][j] == '#') cnt++;
            if(cnt >= 4) ans = true;
        }
        // 横の探索
        if((j + 5) < n) {
            cnt = 0;
            rep(k, 0, 6) if(a[i][j+k] == '#') cnt++;
            if(cnt >= 4) ans = true;
        }
        // ななめの探索
        if(((i + 5) < n) && ((j + 5) < n)) {
            cnt = 0;
            rep(k, 0, 6) if(a[i+k][j+k] == '#') cnt++;
            if(cnt >= 4) ans = true;
        }
         if((0 <= (i-5)) && ((j+5) < n)) {
            cnt = 0;
            rep(k, 0, 6) if(a[i-k][j+k] == '#') cnt++;
            if(cnt >= 4) ans = true;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}