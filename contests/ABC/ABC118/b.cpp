#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> K(N);
    vector<vector<int>> A(N, vector<int>(M));
    vector<int> cnt(M);

    for(int i = 0; i < N; i++) {
        cin >> K[i];
        for(int j = 0; j < K[i]; j++) {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < K[i]; j++) {
            cnt[A[i][j]-1]++;
        }
    }

    int ans = 0;

    for(int i = 0; i < M; i++) {
        if(cnt[i] == N) ans++;
    }

    cout << ans << endl;

    return 0;
}