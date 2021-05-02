#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX_N = 100;

vector<vector<int>> G(MAX_N);
vector<bool> done(MAX_N, false);
bool flag; // 木であるかどうか

void dfs(int c, int p) {
    for(auto next: G[c]) {
        if(next == p) continue;
        if(done[next]) { //同じところにもう一度来たので閉路
            flag = false;
        } else {
            done[next] = true;
            dfs(next, c);
        }
    }
    return;
}

int main() {
    int N, M;
    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    int ans = 0;
    for(int i = 0; i < N; i++) {
        if(done[i] == false) { // まだ調べていない頂点
            flag = true;
            dfs(i, -1);
            if(flag) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}