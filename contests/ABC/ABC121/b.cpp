#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, M, C;
    cin >> N >> M >> C;

    vector<vector<int>> A(N, vector<int>(M));
    vector<int> B(M);

    for(int i = 0; i < M; i++) cin >> B[i];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i < N; i++) {
        int amount = 0;
        for(int j = 0; j < M; j++) {
            amount += A[i][j] * B[j];
        }

        if(amount + C > 0) ans++;
    }

    cout << ans << endl;

    return 0;
}