#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<int> lx(1 << 18);
    vector<int> ly(1 << 18);
    vector<int> rx(1 << 18);
    vector<int> ry(1 << 18);

    vector<vector<int>> cnt(1001, vector<int>(1001));    
    vector<int> ans(1 << 18);

    for(int i = 1; i <= N; i++) cin >> lx[i] >> ly[i] >> rx[i] >> ry[i];

    // 2次元いもす法
    for(int i = 1; i <= N; i++) {
        cnt[lx[i]][ly[i]] += 1;
        cnt[lx[i]][ry[i]] -= 1;
        cnt[rx[i]][ly[i]] -= 1;
        cnt[rx[i]][ry[i]] += 1;
    }

    for(int i = 0; i <= 1000; i++) {
        for(int j = 1; j <= 1000; j++) {
            cnt[i][j] += cnt[i][j-1];
        }
    }


    for(int i = 1; i <= 1000; i++) {
        for(int j = 0; j <= 1000; j++) {
            cnt[i][j] += cnt[i-1][j];
        }
    }

    // 数える
    for(int i = 0; i <= 1000; i++) {
        for(int j = 0; j <= 1000; j++) {
            if(cnt[i][j] >= 1) ans[cnt[i][j]] += 1;
        }
    }

    for(int i = 1; i <= N; i++) cout << ans[i] << endl; 
    return 0;
}