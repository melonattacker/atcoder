// 単一始点最短路問題2（ダイクストラ法）
// ヒープを用いたコード
// 計算量 O(|E|log|V|)
// 入力は https://kuruton.hatenablog.com/entry/2020/11/26/080000 を参考
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P; // firstは最短距離, secondは頂点の番号

const int INF = 100000000;
struct edge { int to, cost; };

int V, E;

// 始点sから各頂点への最短距離を求める
void dijkstra(int s, vector<int>& used, vector<int>& d, vector<vector<edge>>& G) {
    // greater<P>を指定することでfirstが小さい順に取り出せるようにする
    priority_queue<P, vector<P>, greater<P>> que;
    d[s] = 0;
    que.push(P(0, s));

    while(!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;
        if(d[v] < p.first) continue; // 最短経路でなければ無視する
        for(int i = 0; i < G[v].size(); i++) {
            edge e = G[v][i];
            if(d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main() {
    cin >> V >> E; // Vは頂点数、Eは辺数

    vector<int> d(V, INF); // 最短経路
    vector<int> used(V, false); // すでに使われたかのフラグ
    vector<vector<int>> cost(V, vector<int>(V, INF)); // cost[u][v]は辺e=(u,v)のコスト（存在しない場合はINF）
    vector<vector<edge>> G(V);

    for(int i = 0; i < E; i++) {
        int s, t, c;
        cin >> s >> t >> c;
        G[s].push_back({t, c});
        G[t].push_back({s, c});
    }

    dijkstra(0, used, d, G); // 頂点0を始点とする

    for(auto x: d) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}