#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    int A[20];
    int x[20][20];
    int y[20][20];

    for(int i = 1; i <= N; i++) {
        cin >> A[i];

        for(int j = 1; j <= A[i]; j++) {
            cin >> x[i][j] >> y[i][j];
        }
    }

    int ans = 0;
    for (int bit = 1; bit < (1<<N); ++bit) {
        bool is_ok = true;
        int count = 0;
        for(int i = 1; i <= N; i++) {
            // bitのi-1桁目が0かどうかチェック
            if(!(bit & (1 << (i-1)))) {
                continue;
            } else {
                count++;
            }
            // その人が正直者であると仮定されているなら証言チェック
            for(int j = 1; j <= A[i]; j++) {
                // 証言された人が正直者であると仮定されかつ、正直でないと証言された場合
                // 証言された人が正直者でないと仮定されかつ、正直であると証言された場合
                if(((bit >> (x[i][j]-1)) & 1) ^ y[i][j]) is_ok = false;
            }
        }
        if(is_ok) ans = max(ans, count);
    }

    cout << ans << endl;

    return 0;
}