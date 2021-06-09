// 最短路自体を求める（ダイクストラ法）
// 隣接リストを用いたコード
// 計算量 O(|V|^2)
// 入力は https://kuruton.hatenablog.com/entry/2020/12/02/080000 を参考
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 100000000;

int V, E;

// 始点sから各頂点への最短距離を求める
void dijkstra(int s, vector<int>& used, vector<int>& d, vector<int>& prev, vector<vector<int>>& cost) {
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
            if(d[u] > d[v] + cost[v][u]) {
                d[u] = d[v] + cost[v][u];
                prev[u] = v;
            }
        }
    }
}

// 頂点tへの最短路
vector<int> get_path(int t, vector<int>& prev) {
    vector<int> path;
    for(; t != -1; t = prev[t]) path.push_back(t); // tがsになるまでprev[v]を辿っていく
    // このままだとt->sの順になっているので逆順にする
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    cin >> V >> E; // Vは頂点数、Eは辺数

    vector<int> d(V, INF); // 最短経路
    vector<int> used(V, false); // すでに使われたかのフラグ
    vector<vector<int>> cost(V, vector<int>(V, INF)); // cost[u][v]は辺e=(u,v)のコスト（存在しない場合はINF）
    vector<int> prev(V, -1); // 最短路の直前の頂点

    for(int i = 0; i < E; i++) {
        int s, t, c;
        cin >> s >> t >> c;
        cost[s][t] = c; // 頂点s, t間の重みを記録
        cost[t][s] = c; // 頂点s, t間の重みを記録
    }

    dijkstra(0, used, d, prev, cost); // 頂点0を始点とする

    // for(auto x: d) {
    //     cout << x << " ";
    // }
    // cout << endl;

    vector<int> path = get_path(6, prev); // 頂点0から6への最短経路

    for(auto x: path) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}