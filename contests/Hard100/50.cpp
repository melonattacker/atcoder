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

int dx[4] = { 0, 1, 0, -1 }, dy[4] = { -1, 0, 1, 0 };
int vis[55][55];
int dp[55][55];

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> B(H);
    rep(i, 0, H) cin >> B[i];

    queue<pair<int, int>> que;
    que.push({0, 0});
    vis[0][0] = 1;

    int ans = 0;

    while(!que.empty()) {
        auto q = que.front(); 
        que.pop();
        int x = q.first, y = q.second;

        if(x == W-1 and y == H-1) ans = dp[y][x];

        rep(i, 0, 4) {
            int nx = x+dx[i], ny = y+dy[i];
            if(0 <= nx and nx < W and 0 <= ny and ny < H) {
                if(B[ny][nx] == '.' and vis[ny][nx] == 0) {
                    vis[ny][nx] = 1;
                    dp[ny][nx] = dp[y][x]+1;
                    que.push({nx, ny});
                }
            }
        }
    }

    if(!ans) ans = -1;
    else {
        ans = H*W-ans-1;
        rep(y, 0, H) rep(x, 0, W) if (B[y][x] == '#') ans--;
    }

    cout << ans << endl;

    return 0;
}