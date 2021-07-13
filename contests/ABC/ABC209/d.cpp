#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<vector<int>> G(N);

    for(int i = 0; i < N-1; i++) {
        int A, B; cin >> A >> B;
        G[A-1].push_back(B-1);
        G[B-1].push_back(A-1);
    }

    queue<int> que;
    vector<int> dis(N,-1);
    vector<int> qa(Q);
    vector<int> qb(Q);

    que.push(0);
    dis[0] = 0;

    // 幅優先探索
    while(!que.empty()) {
        int t = que.front();
        que.pop();
        for(int x: G[t]) {
            if(dis[x] == -1) {
                dis[x] = dis[t] + 1; // 街1との最短距離を記録
                que.push(x);
            }
        }
    }

    for(int i = 0; i < Q; i++) {
        cin >> qa[i] >> qb[i];
    }

    for(int i = 0; i < Q; i++) {
        if(dis[qa[i]-1]%2 == dis[qb[i]-1]%2) cout << "Town" << endl;
        if(dis[qa[i]-1]%2 != dis[qb[i]-1]%2) cout << "Road" << endl;
    }

    return 0;
}