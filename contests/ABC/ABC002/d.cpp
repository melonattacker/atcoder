#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<bool>> conn(12, vector<bool>(12));

    for(int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        conn[x-1][y-1] = conn[y-1][x-1] = true;
    }

    int ans = 0;
    for (int bit = 0; bit < (1<<N); ++bit) {
        int t = bitset<32>(bit).count();
		if(t <= ans){ continue; }

        bool ok = true;
        for (int i = 0; i < N; ++i) {
            for(int j = 0; j < i; j++) {
                if (bit >> i & bit >> j & 1 && !conn[i][j]) { // "bit"のi桁目が1かどうかチェック
                    ok = false;
                }
            }
        }
        if(ok) ans = t;
    }

    cout << ans << endl;

    return 0;
}