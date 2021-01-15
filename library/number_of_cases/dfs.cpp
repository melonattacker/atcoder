#include <bits/stdc++.h>
using namespace std;

int N = 3;
int M = 4;

// 長さNで桁がとりうる値が0からM-1までの数列を生成
void dfs(vector<int> &A) {
    // 数列の長さが N に達したら打ち切り
    if (A.size() == N) {
        // 処理
        for(int i = 0; i < N; i++) {
            cout << A[i];
        }
        cout << endl;
        return;
    }

    for (int v = 0; v < M; ++v) {
        A.push_back(v);
        dfs(A);
        A.pop_back();
    }
}

int main() {
    vector<int> A;
    dfs(A);
}