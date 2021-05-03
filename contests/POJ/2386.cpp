#include <iostream>
using namespace std;
typedef long long ll;

int N, M;
const int MAX_N = 100;
const int MAX_M = 100;
char field[MAX_N][MAX_M];

// 現在位置(x, y)
void dfs(int x, int y) {
    // 今いるところを.に置き換え
    field[x][y] = '.';

    // 移動する8方向をループ
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            // x方向にdx y方向にdy 移動した場所を(nx, ny)とする
            int nx = x + dx, ny = y + dy;

            // nxとnyが庭の範囲ないかどうかとfield[nx][ny]が水溜りかどうかを判定
            if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') dfs(nx, ny);
        }
    }
    return;
}

int main() {
    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> field[i][j];
        }
    }

    int res = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(field[i][j] == 'W') {
                // Wが残っているならそこからdfsを始める
                dfs(i, j);
                res++;
            }
        }
    }

    cout << res << endl;

    return 0;
}