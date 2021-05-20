#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> L(N);

    for(int i = 0; i < N; i++) {
        cin >> L[i];
    }

    ll ans = 0;

    // 順位キューを用意（小さい数から出てくる）
    priority_queue<int, vector<int>, greater<int>> que;
    for(int i = 0; i < N; i++) {
        que.push(L[i]);
    }

    // 板が1本になるまで適用
    while(que.size() > 1) {
        // 一番目に短い板, 二番目に短い板を取り出す
        int l1, l2;
        l1 = que.top();
        que.pop();
        l2 = que.top();
        que.pop();

        // それらを併合
        ans += l1 + l2;
        que.push(l1 + l2);
    }

    cout << ans << endl;

    return 0;
}