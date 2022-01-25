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

int n, n2;
vector<vector<int>> a;
int ans;

void dfs(vector<bool> s, int x) {
    int si = -1;
    // 使われていない最小の数を探す
    rep(i, 0, n2) if(!s[i]) { si = i; break; }

    // 全てのペアができている場合, maxとって終了
    if(si == -1) {
        ans = max(ans, x);
        return;
    }

    // 全てのペアができていない場合
    s[si] = true;
    rep(i, 0, n2) if(!s[i] && si != i) {
        // 使われていなくて最小のものを探してペアを作る
        s[i] = true;
        dfs(s, x^a[si][i]); // 潜る
        s[i] = false; // 返ってきたら元に戻す
    } 
}

int main() {
    cin >> n;
    n2 = n * 2;
    a = vector<vector<int>>(n2, vector<int>(n2));

    rep(i, 0, n2) {
        for(int j = i+1; j < n2; j++) {
            cin >> a[i][j];
            a[j][i] = a[i][j];
        }
    }

    vector<bool> s(n2);
    dfs(s, 0);

    cout << ans << endl;

    return 0;
}