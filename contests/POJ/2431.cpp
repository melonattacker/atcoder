#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int L, P, N;
    cin >> N;

    vector<int> A(N+1);
    vector<int> B(N+1);

    for(int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    cin >> L >> P;

    // 簡単のためゴールをガソリンスタンドに追加
    A[N] = L;
    B[N] = 0;
    N++;

    priority_queue<int> que;

    // ans: 補給回数, pos: 今いる場所, tank: タンクのガソリンの量
    int ans = 0, pos = 0, tank = P;

    for(int i = 0; i < N; i++) {
        // 次に進む距離
        int d = A[i] - pos;

        // 十分な量になるまでガソリンを補給
        while(tank - d < 0) {
            if(que.empty()) {
                cout << -1 << endl;
                return 0;
            }
            tank += que.top();
            que.pop();
            ans++;
        }

        tank -= d;
        pos = A[i];
        que.push(B[i]);
    }

    cout << ans << endl;
    return 0;
}