#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> t(N);

    int amount = 0;

    for(int i = 0; i < N; i++) {
        cin >> t[i];
        amount += t[i];
    }

    int res = 200;

    for (int bit = 0; bit < (1<<N); ++bit) {
        int first = 0;
        for (int i = 0; i < N; ++i) {
            if (bit & (1<<i)) { // "bit"のi桁目が1かどうかチェック
                first += t[i];
            }
        }

        int second = amount - first;
        int time = max(first, second);
        res = min(res, time);
    }

    cout << res << endl;

    return 0;
}