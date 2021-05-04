// 例題: 硬貨の問題
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A;
    vector<int> C(6);
    const int V[6] = {1, 5, 10, 50, 100, 500};

    for(int i = 0; i < 6; i++) {
        cin >> C[i];
    }

    cin >> A;

    int ans = 0;

    for(int i = 5; i >= 0; i--) {
        int t = min(A / V[i], C[i]); // コインiを使う枚数;
        A -= t * V[i];
        ans += t;
    }

    cout << ans << endl;

    return 0;
}