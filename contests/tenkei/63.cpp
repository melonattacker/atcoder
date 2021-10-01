#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

// 同じ整数は最大何個あるか調べる
int maximum_same(vector<int> R) {
    map<int, int> Map;
    int ret = 0;
    for(int i = 0; i < R.size(); i++) {
        Map[R[i]] += 1;
        ret = max(ret, Map[R[i]]);
    }
    return ret;
}

int main() {
    int H, W;
    int P[19][10009];
    cin >> H >> W;

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) cin >> P[i][j];
    }

    int ans = 0;
    // 行の選び方を決める
    for(int i = 0; i < (1 << H); i++) {
        vector<int> R;
        // 列を全探索する
        for(int j = 0; j < W; j++) {
            int idx = -1;
            bool flag = false;
            for(int k = 0; k < H; k++) {
                if((i & (1 << k)) == 0) continue; // 選ばない行はスキップ
                if(idx == -1) idx = P[k][j]; 
                else if(idx != P[k][j]) flag = true;
            }
            // 選択した行で選択した列全ての数が等しいものを記録
            if(flag == false) R.push_back(idx);
        }

        int cntH = 0, cntW = maximum_same(R);
        for(int j = 0; j < H; j++) {
            if((i & (1 << j)) != 0) cntH += 1;
        }
        ans = max(ans, cntH * cntW);
    }

    cout << ans << endl;

    return 0;
}