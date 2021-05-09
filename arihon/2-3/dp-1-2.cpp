// 例題: ナップサック問題
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N, W;
vector<int> w;
vector<int> v;
vector<vector<int>> dp;

// i番目以降の品物から重さの総和がj以下となるように選ぶ
int rec(int i, int j) {
    if(dp[i][j] > 0) {
        // すでに調べたことがあるならその結果を再利用
        return dp[i][j];
    }
    int res;
    if(i == N) {
        // もう品物は残っていない
        res = 0;
    } else if(j < w[i]) {
        // この品物は入らない
        res = rec(i + 1, j);
    } else {
        // 入れない場合と入れる場合を試す
        res = max(rec(i+1, j), rec(i+1, j-w[i])+v[i]);
    }

    return dp[i][j] = res;
}

int main() {
    cin >> N >> W;

    w.resize(N);
    v.resize(N);
    dp.resize(N+1);
    for(int i = 0; i < N+1; i++) {
        dp[i].resize(W+1);
    }

    for(int i = 0; i < N; i++) {
        cin >> w[i];
        cin >> v[i];
    }

    cout << rec(0, W) << endl;

    return 0;
}