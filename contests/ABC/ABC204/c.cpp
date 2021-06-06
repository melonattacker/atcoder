#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<bool> seen;
ll ans;
void dfs(const vector<vector<ll>> &G, int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        ans++;
        dfs(G, next_v); // 再帰的に探索
    }
}

int main() {
    ll N, M;
    cin >> N >> M;

    vector<vector<ll>> G(N);

    for(int i = 0; i < M; i++) {
        ll a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
    }

    ans = N;

    if(M == 0) {
        cout << ans << endl;
        return 0;
    }

    // 頂点 0 をスタートとした探索
    for(int i = 0; i < N; i++) {
        seen.assign(N, false); // 全頂点を「未訪問」に初期化
        dfs(G, i);
    }

    cout << ans << endl;

    return 0;
}