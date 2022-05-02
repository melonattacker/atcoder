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

int H, W;
V<string> S(20);
int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0}; 

vector<vector<int>> bfs(int sx, int sy) {
    queue<pair<int, int>> q;
    vector<vector<int>> res(H, vector<int>(W, inf));
    vector<vector<bool>> vis(H, vector<bool>(W, false));
    res[sy][sx] = 0;
    vis[sy][sx] = true;
    q.push({sx, sy});

    while(!q.empty()) {
        auto p = q.front();
        int x = p.first;
        int y = p.second;
        q.pop();

        rep(d, 0, 4) {
            int xx = x + dx[d];
            int yy = y + dy[d];
            if(0 <= xx and xx < W and 0 <= yy and yy < H) {
                if(S[yy][xx] != '#' and !vis[yy][xx]) {
                    res[yy][xx] = res[y][x]+1;
                    vis[yy][xx] = true;
                    q.push({xx, yy});
                }
            }
        }
    }

    return res;
}

int main() {
    cin >> H >> W;
    rep(i, 0, H) cin >> S[i];

    int ans = 0;
    rep(sx, 0, W) rep(sy, 0, H) {
        if(S[sy][sx] != '#') {
            auto res = bfs(sx, sy);
            rep(x, 0, W) rep(y, 0, H) if (S[y][x] != '#') {
                chmax(ans, res[y][x]);
            }
        }
    }

    cout << ans << endl;

    return 0;
}