// 単一始点最短路問題2（ダイクストラ法）
// 隣接リストを用いたコード
// 計算量 O(|V|^2)
// 入力は https://kuruton.hatenablog.com/entry/2020/11/26/080000 を参考
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 100000000;

int V, E;

// 始点sから各頂点への最短距離を求める
void dijkstra(int s, vector<int>& used, vector<int>& d, vector<vector<int>>& cost) {
    d[s] = 0;

    while(true) {
        int v = -1;
        // まだ使われていない頂点のうち距離が最小のものを探す
        for(int u = 0; u < V; u++) {
            if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
        }

        if(v == -1) break;
        used[v] = true;

        for(int u = 0; u < V; u++) {
            d[u] = min(d[u], d[v] + cost[v][u]);
        }
    }
}

int main() {
    cin >> V >> E; // Vは頂点数、Eは辺数

    vector<int> d(V, INF); // 最短経路
    vector<int> used(V, false); // すでに使われたかのフラグ
    vector<vector<int>> cost(V, vector<int>(V, INF)); // cost[u][v]は辺e=(u,v)のコスト（存在しない場合はINF）

    for(int i = 0; i < E; i++) {
        int s, t, c;
        cin >> s >> t >> c;
        cost[s][t] = c; // 頂点s, t間の重みを記録
        cost[t][s] = c; // 頂点s, t間の重みを記録
    }

    dijkstra(0, used, d, cost); // 頂点0を始点とする

    for(auto x: d) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}