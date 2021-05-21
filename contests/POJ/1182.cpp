#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main() {
    int N, K;

    cin >> N >> K;

    vector<int> T(K);
    vector<int> X(K);
    vector<int> Y(K);

    for(int i = 0; i < K; i++) {
        cin >> T[i] >> X[i] >> Y[i];
    }

    UnionFind tree(N*3);

    int ans = 0;
    for(int i = 0; i < K; i++) {
        int t = T[i];
        int x = X[i] - 1, y = Y[i] - 1; // 0,..,N-1の範囲にする

        // 正しくない番号
        if(x < 0 || N <= x || y < 0 || N <= y) {
            ans++;
            continue;
        }

        if(t == 1) {
            // 「xとyは同じ種類」という情報
            if(tree.same(x, y+N) || tree.same(x, y+2*N)) {
                ans++;
            } else {
                tree.unite(x, y);
                tree.unite(x+N, y+N);
                tree.unite(x+N*2, y+N*2);
            }
        } else {
            // 「xはyを食べる」という情報
            if(tree.same(x,y) || tree.same(x, y+2*N)) {
                ans++;
            } else {
                tree.unite(x, y+N);
                tree.unite(x+N, y+2*N);
                tree.unite(x+2*N, y);
            }
        }
    }

    cout << ans << endl;
}