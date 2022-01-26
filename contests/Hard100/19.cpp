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
    int H, W, N;
    cin >> H >> W >> N;

    V<int> A(N);
    rep(i, 0, N) cin >> A[i];
    VV<int> ans(H, V<int>(W));

    int cu = 0;
    rep(y, 0, H) rep(x, 0, W) {
        ans[y][x] = cu+1;
        A[cu]--;
        if(!A[cu]) cu++;
    }

    rep(y, 0, H) {
        rep(_x, 0, W) {
            int x;
            if(y % 2 == 0) x = _x; // y行目が偶数行目の場合はそのまま
            else x = W-1-_x; // y行目が奇数行目の場合は入れ替え

            if (_x) cout << " ";
            cout << ans[y][x];
        }
        cout << endl;
    }


    return 0;
}