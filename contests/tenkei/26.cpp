#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
using Graph = vector<vector<int>>;

// 二色で木の頂点を色塗り
vector<int> color;
void dfs(const Graph &G, int v, int col = 0) {
    color[v] = col;
    for (auto next_v : G[v]) {
        if (color[next_v] == -1)  dfs(G, next_v, 1 - col);
    }
}

int main() {
    int N;
    cin >> N;

    Graph G(N+1);

    for(int i = 0; i < N-1; i++) {
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    // 探索
    color.assign(N, -1);

    dfs(G, 0);

    int cnt_zero = 0;
    int cnt_one = 1;
    for(int i = 0; i < N; i++) {
        if(color[i] == 0) cnt_zero++;
        if(color[i] == 1) cnt_one++;
    }
    
    int num;
    if(cnt_zero >= cnt_one) {
        num = 0;
    } else {
        num = 1;
    }

    int cnt = 0;

    for(int i = 0; i < N; i++) {
        if(color[i] == num) {
            cnt++;
            cout << i+1 << " ";
        }
        if(cnt == N/2) break;
    }
    cout << endl;

    return 0;
}