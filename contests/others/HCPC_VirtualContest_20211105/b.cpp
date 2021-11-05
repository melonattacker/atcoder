#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, A, B, C, X;

    while(true) {
        cin >> N >> A >> B >> C >> X;
        if(N == 0 && A == 0 && B == 0 && C == 0 && X == 0) break; // 全部0なら終了

        vector<int> Y(N);

        for(int i = 0; i < N; i++) cin >> Y[i];

        int target = Y[0];
        int i = 0;

        int cnt = 0;

        while(true) {
            if(X == target) {
                if(i == N-1) {
                    break;
                }
                i += 1;
                target = Y[i];
            }

            cnt++;
            if(cnt == 10001) break;
            X = (A * X + B) % C;
        }

        if(cnt == 10001) {
            cout << -1 << endl;
        } else {
            cout << cnt << endl;
        }
    }

    return 0;
}