#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

vector<vector<int>> G;
vector<int> ans;

void dfs(int crr, int pre) {
    ans.push_back(crr);
    for(int nxt: G[crr]) {
        if(nxt != pre) { // 都市1に帰ってきた場合、旅を終了する
            dfs(nxt, crr);
            ans.push_back(crr); // 直前にいた都市に移動
        }
    }
}

int main() {
    int N;
    cin >> N;

    G.resize(N+1);

    for(int i = 0; i < N-1; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    for(int i = 1; i <= N; i++) sort(G[i].begin(), G[i].end());

    dfs(1, -1);

    for(int i = 0; i < ans.size(); i++) {
        if(i > 0) cout << ' ';
        cout << ans[i];
    }

    return 0;
}