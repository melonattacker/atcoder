#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    int R, N;

    while(cin >> R >> N && R != -1 || N != -1) {
        vector<int> X(N);

        for (int i = 0; i < N; i++) {
            cin >> X[i];
        }

        int i = 0, ans = 0;

        sort(X.begin(), X.end());

        while (i < N) {
            // sはカバーされていない一番左の点の位置
            // X[i++]はX[i]を参照した後、iをインクリメント
            int s = X[i++];
            // sから距離Rを超える点まで進む
            while (i < N && X[i] <= s + R) i++;

            // pは新しく印をつける点の位置
            int p = X[i - 1];
            // pから距離Rを超える点まで進む
            while (i < N && X[i] <= p + R) i++;

            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}