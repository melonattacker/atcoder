#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX_W = 500;
const int MAX_H = 500;

int H, W;
vector<vector<char>> maze(MAX_H, vector<char>(MAX_W));
vector<vector<bool>> reached(MAX_H, vector<bool>(MAX_W));

void search(int x, int y) {
    // 迷路の外側か壁の場合は何もしない
    if(x < 0 || W <= x || y < 0 || H <= y || maze[y][x] == '#') return;
    // 以前に到達していたら何もしない
    if(reached[y][x]) return;

    // 到達したことを記す
    reached[y][x] = true;

    search(x+1, y); // 右
    search(x-1, y); // 左
    search(x, y+1); // 下
    search(x, y-1); // 上
}

int main() {
    cin >> H >> W;

    int s_x, s_y;
    int g_x, g_y;

    for(int i = 0; i < H; i++) { // 縦
        for(int j = 0; j < W; j++) { // 横
            cin >> maze[i][j];
            if(maze[i][j] == 's') s_x = j, s_y = i;
            if(maze[i][j] == 'g') g_x = j, g_y = i;
        }
    }

    search(s_x, s_y);

    if(reached[g_y][g_x]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}