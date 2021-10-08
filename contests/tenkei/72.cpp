#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

const int MAX_W = 20;
const int MAX_H = 20;

int H, W;

vector<vector<char>> maze(MAX_H, vector<char>(MAX_W));
vector<vector<bool>> reached(MAX_H, vector<bool>(MAX_W));
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int search(int sx, int sy, int x, int y) {
    if(sx == x && sy == y && reached[x][y] == true) return 0; 

    // 到達したことを記す
    reached[x][y] = true;

    int ret = -100;
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i]; 
        int ny = y + dy[i];
        if (nx < 1 || ny < 1 || nx > H || ny > W || maze[nx][ny] == '#') continue;
        if ((sx != nx || sy != ny) && reached[nx][ny] == true) continue;
        int v = search(sx, sy, nx, ny);
        ret = max(ret, v + 1);
    }

    reached[x][y] = false;
	return ret;
}

int main() {
    cin >> H >> W;

    for(int i = 1; i <= H; i++) { // 縦
        for(int j = 1; j <= W; j++) { // 横
            cin >> maze[i][j];
        }
    }

    int ans = 0;
    for(int i = 1; i <= H; i++) { // 縦
        for(int j = 1; j <= W; j++) { // 横
            ans = max(ans, search(i, j, i, j));
        }
    }

    if(ans <= 2) ans = -1;
    cout << ans << endl;

    return 0;
}