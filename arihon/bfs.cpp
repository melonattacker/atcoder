// 2-1 例題: 迷路の最短路
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = numeric_limits<int>::max();

int main() {
    int N, M, sx, sy, gx, gy;
    cin >> N >> M;

    vector<vector<char>> maze(N+1, vector<char>(M+1));
    vector<vector<int>> distance(N+1, vector<int>(M+1, INF));
    queue<pair<int, int>> q;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> maze[i+1][j+1];
            if(maze[i+1][j+1] == 'S') sx = j+1, sy = i+1;
            if(maze[i+1][j+1] == 'G') gx = j+1, gy = i+1;
        }
    }

    q.emplace(sy, sx); //スタート地点座標をqueueに代入
    distance[sy][sx] = 0; //スタート地点座標からの距離を0に設定

    int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };//移動4方向のベクトル

    while(!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();

        for(int i = 0; i < 4; i++) {
            //移動した後の点を(ny,nx)とする
            int ny = now.first + dy[i], nx = now.second + dx[i];

            //移動が可能かの判断と既に訪れた事があるかの判定
            if(0 <= ny && ny <= N && 0 <= nx && ny <= M && maze[ny][nx] != '#' && distance[ny][nx] == INF) {
                q.emplace(ny, nx); //次の位置をqueueに入れる
                distance[ny][nx] = distance[now.first][now.second] + 1; //点の距離をnowから+1の距離で確定する                 
            }
        }
    }

    cout << distance[gy][gx] << endl;
    return 0;
}