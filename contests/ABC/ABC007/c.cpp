#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = numeric_limits<int>::max();

int main() {
    int R,C,sx,sy,gx,gy;
    cin >> R >> C  >> sy >> sx >> gy >> gx;

    vector<vector<char>> maze(R+1, vector<char>(C+1));
    vector<vector<int>> distance(R+1, vector<int>(C+1, INF));
    queue<pair<int, int>> q;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> maze[i+1][j+1];
        }
    }

    q.emplace(sy, sx); //スタート地点座標をqueueに代入
    distance[sy][sx] = 0; //スタート地点座標からの距離を0に設定

    int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };//移動4方向のベクトル

    while(!q.empty()) {
        pair<int, int> now = q.front(); //現在地
        q.pop();

        //移動4方向をループ
        for(int i = 0; i < 4; i++) {

            //移動した後の点を(ny,nx)とする
            int ny = now.first + dy[i], nx = now.second + dx[i];

            //移動が可能かの判断と既に訪れた事があるかの判定
            if(0 <= ny && ny <= R && 0 <= nx && nx <= C && maze[ny][nx] != '#' && distance[ny][nx] == INF) 
            {
                q.emplace(ny, nx); //次の位置をqueueに入れる
                distance[ny][nx] = distance[now.first][now.second] + 1; //点の距離をnowから+1の距離で確定する                 
            }
        }
    }

    cout << distance[gy][gx] << endl;
    return 0;
}