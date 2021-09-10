#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> s(M);
    vector<int> p(M);

    for(int i = 0; i < M; i++) {
        int k;
        cin >> k;
        s[i].resize(k);
        for(int j = 0; j < k; j++) {
            cin >> s[i][j];
            --s[i][j];
        }
    }

    for(int i = 0; i < M; i++) cin >> p[i]; 

    int ans = 0;

    for(int i = 0; i < (1<<N); i++) {
        bool ok = true;
        for(int j = 0; j < M; j++) {
            int on = 0;
            for (int id: s[j]) {
                if ((i >> id) & 1) { // "bit"のi桁目が1かどうかチェック
                    on++;
                }
            }

            if(on % 2 != p[j]) {
                ok = false;
            }
        }

        if(ok) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}