// 全点対最短経路問題（ワーシャル・フロイド法）
// 全ての2頂点の最短経路を求める問題
// 計算量 : O(|V|^3) 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 100000000;

int V, E;

void warshall_floyd(vector<vector<int>>& d) {
    for(int k = 0; k < V; k++) {
        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

int main() {
    cin >> V >> E; // Vは頂点数、Eは辺数

    vector<vector<int>> d(V, vector<int>(V, INF)); // 最短経路

    // ただしd[i][i] = 0
    for(int i = 0; i < V; i++) {
        d[i][i] = 0;
    }

    for(int i = 0; i < E; i++) {
        int f, t, c;
        cin >> f >> t >> c;
        d[f][t] = c;
    }

    warshall_floyd(d);

    for(auto x: d) {
        for(auto y: x) {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}