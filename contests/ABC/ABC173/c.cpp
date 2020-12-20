#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<vector<char>> input(H, vector<char>(W));

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> input[i][j];
        }
    }

    int ans = 0;

    // 各行に対して赤く塗るか塗らないかのパターンを列挙
    for(int i = 0; i < (1<<H); i++) {
        // 各列に対して赤く塗るか塗らないかのパターンを列挙
        for(int j = 0; j < (1<<W); j++) {
            int cnt = 0;
            for (int k = 0; k < H; k++) {
                for(int l = 0; l < W; l++) {
                    // 行と列でどちらも赤く塗らない、かつそこが黒の場合cntをインクリメント
                    if(((i & (1 << k)) == 0) && ((j & (1 << l)) == 0) && (input[k][l] == '#')) {
                        cnt++;
                    } 
                }
            }
            if(cnt == K) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}