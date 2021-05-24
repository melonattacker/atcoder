#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 頂点を1と-1で塗っていく
bool dfs(int v, int c, vector<int>& color, vector<vector<int>> &G) {
    color[v] = c; // 頂点vをcで塗る

    for(int i = 0; i < G[v].size(); i++) {
        // 隣接している頂点が同じ色ならfalse
        if(color[G[v][i]] == c) return false;
        // 隣接している頂点がまだ塗られていないなら-cで塗る
        if(color[G[v][i]] == 0 && !dfs(G[v][i], -c, color, G)) return false;
    }
    // すべての頂点を塗れたらtrue
    return true;
}

int main() {
    // 頂点数と辺数
    int N, M;
    cin >> N >> M;

    vector<vector<int>> G(N);
    vector<int> color(N);

    // グラフ入力受け取り
    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
    }

    for(int i = 0; i < N; i++) {
        if(color[i] == 0) {
            // まだ頂点iが塗られていなければ1で塗る
            if(!dfs(i, 1, color, G)) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}