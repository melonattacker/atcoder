#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

const int MAX_W = 1000;
const int MAX_H = 1000;

int H, W, px, py, qx, qy;
int ans = 0;
vector<vector<char>> maze(MAX_H, vector<char>(MAX_W));
vector<vector<bool>> reached(MAX_H, vector<bool>(MAX_W));

int vx[4] = {-1, 0, 1, 0};
int vy[4] = {0, 1, 0, -1};

void search(int x, int y, int k) {
    // 迷路の外側か壁の場合は何もしない
    if(x < 0 || H <= x || y < 0 || W <= y) return;
    // ゴールに到達
    if(x == qx && y == qy) return;
    ans++;

    for(int i = 0; i < 4; i++) {
        int nk = (k - 1 + i + 4) % 4;
        if(x + vx[nk] < 0 || H <= x + vx[nk] || y + vy[nk] < 0 || W <= y + vy[nk]) continue;

        if(maze[x + vx[nk]][y + vy[nk]] == '.') {
            if(x + vx[nk] == px && y + vy[nk] == py) {
                ans = -1;
                return;
            }
            search(x + vx[nk], y + vy[nk], nk);
        } else {
            continue;
        }

        return;
    }
}

int main() {
    cin >> H >> W;
    cin >> px >> py >> qx >> qy;

    for(int i = 0; i < H; i++) { // 縦
        for(int j = 0; j < W; j++) { // 横
            cin >> maze[i][j];
        }
    }

    px--, py--, qx--, qy--;

    search(px, py, 0);

    cout << ans << endl;

    return 0;
}