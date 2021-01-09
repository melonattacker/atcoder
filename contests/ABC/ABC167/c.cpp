#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M >> X;
    vector<vector<int>> A(N, vector<int>(M));
    vector<int> C(N);

    for(int i = 0; i < N; i++){
        cin >> C[i];
        for(int j = 0; j < M; j++) cin >> A[i][j];
    }

    int ans = 1200001;

    for(int bit = 0; bit < 1<<N; bit++) {
        vector<int> level(M);
        int cost = 0;

        for(int i = 0; i < N; i++) {
            if(bit & (1<<i)) {
                cost += C[i];
                for(int j = 0; j < M; j++){
                    level[j] += A[i][j];
                }
            }
        }

        bool ok = true;
        for(int j = 0; j < M; j++){
            if(level[j] < X) {
                ok = false;
            }
        }

        if(ok) {
            ans = min(ans, cost);
        }
    }

    if(ans == 1200001) cout << -1 << endl;
    else cout << ans << endl;
}