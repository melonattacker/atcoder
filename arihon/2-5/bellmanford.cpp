// 単一始点最短路問題1（ベルマンフォード法）
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = numeric_limits<int>::max();

// 頂点fromから頂点toへのコストcostの辺
struct edge { int from, to, cost; };

int V, E;

// s番目の頂点から各頂点への最短経路を求める
void bellmanford(int s, vector<int>& d, vector<edge>& es) {
    for(int i = 0; i < V; i++) d[i] = INF;
    d[s] = 0;
    while(true) {
        bool update = false;
        for(int i = 0; i < E; i++) {
            edge e = es[i];
            if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if(!update) break;
    }
}

int main() {
    cin >> V >> E; // Vは頂点数、Eは辺数

    vector<int> f(E);
    vector<int> t(E);
    vector<int> c(E);

    vector<int> d(V); // 最短経路
    vector<edge> es(E); // 辺

    for(int i = 0; i < E; i++) {
        int f, t, c;
        cin >> f >> t >> c;
        es[i] = {f, t, c};
    }

    bellmanford(0, d, es); // 頂点0を始点とする

    for(auto x: d) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
