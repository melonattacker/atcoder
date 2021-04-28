#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fill(vector<vector<char>> &map, vector<vector<bool>> &checked, int x, int y) {
    // 迷路の外側か壁の場合は何もしない
    if(x < 0 || 10 <= x || y < 0 || 10 <= y || map[y][x] == 'x') return;
    // 以前に到達していたら何もしない
    if(checked[y][x]) return;

    // 到達したことを記す
    checked[y][x] = true;

    fill(map, checked, x+1, y); // 右
    fill(map, checked, x-1, y); // 左
    fill(map, checked, x, y+1); // 下
    fill(map, checked, x, y-1); // 上
}

bool check(vector<vector<char>> &map) {
    vector<vector<bool>> checked(10, vector<bool>(10, false));

    int s_x, s_y;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(map[i][j] == 'o') {
                s_x = j;
                s_y = i;
                break;
            }
        }
    }

    // 最初の陸地から進むことが可能な陸地にtrueフラグを立てる。
    fill(map, checked, s_x, s_y);

    // 全ての陸地にtrueフラグが立っていた場合には、ok(=true)を返す。
    // falseがある場合には、フラグを立てられなかった"離れている陸地がある"ということになる。
    bool ok = true;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(map[i][j] == 'o') {
                if(!checked[i][j]) ok = false;
            }
        }
    }

    return ok;
}

int main() {
    int s_x, s_y;

    vector<vector<char>> map(10, vector<char>(10));

    bool start_found = false;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> map[i][j];
        }
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(map[i][j] != 'x') continue; // 海じゃなければスルー

            map[i][j] = 'o'; // 海を陸地にした場合に...

            // もし全ての陸地にtrueフラグを立てられれば（陸地が繋がれば）、YESを表示する。
            if(check(map)) {
                cout << "YES" << endl;
                return 0;
            }

            // 全ての陸地にtrueフラグを立てられなかった場合には、陸地を海に戻す（この処理を繰り返していく）。
            map[i][j] = 'x';
        }
    }

    cout << "NO" << endl;
    return 0;
}