#include <bits/stdc++.h>
using namespace std;

// 入力
int N, M, Q;
vector<long long> a, b, c, d;

// 数列 A のスコアを計算
long long score(const vector<int> &A) {
    long long res = 0;
    for (int i = 0; i < Q; ++i) if (A[b[i]] - A[a[i]] == c[i]) res += d[i];
    return res;
}

// 数列 A に要素を付け加えて行って、最終的にできる数列のうちの
// スコアの最大値を返す
// 特に、最初の呼出しに対する返り値が答え
long long dfs(vector<int> &A) {
    if (A.size() == N) {
        // for(int i = 0; i < (int) A.size(); i++) {
        //     cout << A[i] + 1;
        // }
        // cout << endl;
        return score(A);
    }
    long long res = 0;
    int prev_last = (A.empty() ? 0 : A.back());
    // 単調増加
    for (int add = prev_last; add < M; ++add) {
        A.push_back(add);
        res = max(res, dfs(A)); // 再帰呼出しながら、スコア最大値を更新
        A.pop_back();
    }
    return res;
}

int main() {
    cin >> N >> M >> Q;
    a.resize(Q); b.resize(Q); c.resize(Q); d.resize(Q);
    for (int q = 0; q < Q; ++q) {
        cin >> a[q] >> b[q] >> c[q] >> d[q];
        --a[q], --b[q];
    }
    vector<int> A;
    cout << dfs(A) << endl;
}