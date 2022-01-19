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

int ans[2010];

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    X--; Y--;

    rep(i, 0, N) rep(j, i+1, N) {
        int k = inf;
        chmin(k, j-i); // X->Yを使用しない
        chmin(k, abs(X-i)+abs(Y-j)+1); // X->Yを使用する
        ans[k]++;
    }

    rep(k, 1, N) cout << ans[k] << endl;

    return 0;
}