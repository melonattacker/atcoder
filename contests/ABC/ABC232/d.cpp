#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> c(n, vector<char>(m));
    for(int i = 0; i < n; i++) { // 縦
        for(int j = 0; j < m; j++) { // 横
            cin >> c[i][j];
        }
    }

    vector<vector<int>> f(n+1, vector<int>(m+1));
    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            if (c[i][j] == '#') continue;
            f[i][j] = max(f[i + 1][j], f[i][j + 1]) + 1;
        }
    }
    cout << f[0][0] << '\n';
    return 0;
}