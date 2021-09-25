#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
const int inf = 1012345678;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

struct state {
	int x, y, dir; // dirは向いている方向
};

int main() {
    int H, W, sx, sy, gx, gy;
    vector<vector<vector<int>>> dist(1009, vector<vector<int>>(1009, vector<int>(4)));
    string S[1009];
    cin >> H >> W >> sx >> sy >> gx >> gy;

    --sx, --sy, --gx, --gy;
	for (int i = 0; i < H; ++i) {
		cin >> S[i];
	}

    for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			dist[i][j][0] = inf; // マス(i,j)で上を向く状態までの方向転換の最小回数
			dist[i][j][1] = inf; // マス(i,j)で右を向く状態までの方向転換の最小回数
			dist[i][j][2] = inf; // マス(i,j)で下を向く状態までの方向転換の最小回数
			dist[i][j][3] = inf; // マス(i,j)で左を向く状態までの方向転換の最小回数
		}
	}

    deque<state> deq;
    for (int i = 0; i < 4; ++i) {
		dist[sx][sy][i] = 0;
		deq.push_back({ sx, sy, i });
	}

    // 幅優先探索
    while (!deq.empty()) {
        state u = deq.front();
        deq.pop_front();

        for(int i = 0; i < 4; i++) {
            int tx = u.x + dx[i], ty = u.y + dy[i];
            int cost = dist[u.x][u.y][u.dir] + (u.dir != i ? 1 : 0); // 向きが変わるならコストを1増やす
            if (0 <= tx && tx < H && 0 <= ty && ty < W && S[tx][ty] == '.' && dist[tx][ty][i] > cost) {
			    dist[tx][ty][i] = cost;
				if (u.dir != i) deq.push_back({ tx, ty, i });
				else deq.push_front({ tx, ty, i });
			}
        }
    }
    int answer = inf;
    for (int i = 0; i < 4; ++i) {
		answer = min(answer, dist[gx][gy][i]); // gx, gyの座標で方向転換が最小の向きを選ぶ
	}

    cout << answer << endl;

    return 0;
}