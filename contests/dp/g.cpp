#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

vector<vector<int>> G;
// メモ化再帰
int dp[100100]; // dp[v]: vを始点とした時のGの有効パスの最大値

int rec(int v) {
    if(dp[v] != -1) return dp[v]; // 更新済み

    int res = 0;
    for(auto nv: G[v]) {
        res = max(res, rec(nv)+1);
    }
    return dp[v] = res;
}

int main() {
    int N, M;
    cin >> N >> M;

    G.assign(N, vector<int>());

    for(int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        G[x].push_back(y);
    }

    // 初期化
    for(int v = 0; v < N; v++) dp[v] = -1;

    // 全ノードを探索
    int ans = 0;
    for(int v = 0; v < N; v++) ans = max(ans, rec(v));

    cout << ans << endl;

    return 0;
}