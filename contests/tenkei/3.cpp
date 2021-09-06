#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1 << 30;
// const long long INF = 1LL << 60;
int N;
using Graph = vector<vector<int>>;
vector<int> dist;
Graph G;

void getdist(int start) {
    for(int i = 1; i <= N; i++) dist[i] = INF;

    queue<int> Q;
    Q.push(start);
    dist[start] = 0;

    while (!Q.empty()) {
		int pos = Q.front(); Q.pop();
		for (int to : G[pos]) {
			if (dist[to] == INF) {
				dist[to] = dist[pos] + 1;
				Q.push(to);
			}
		}
	}
}

int main() {
    cin >> N;

    G.resize(N+1);
    dist.resize(N+1);
    for (int i = 1; i <= N-1; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 頂点1からの最短経路を求める
    getdist(1);
    int maxn1 = -1; // maxn1: 頂点1から最も長い最短距離
    int maxid1 = -1; // maxid1: 頂点1から最も離れている頂点
    for(int i = 1; i <= N; i++) {
        if(maxn1 < dist[i]) {
            maxn1 = dist[i];
            maxid1 = i;
        }
    }

    // 頂点 maxid1 からの最短距離を求める
    // maxn2 : 木の直径（最短距離最大値）
    getdist(maxid1);
    int maxn2 = -1;
    for(int i = 1; i <= N; i++) {
        maxn2 = max(maxn2, dist[i]);
    }

    cout << maxn2 + 1 << endl;
    return 0;
}