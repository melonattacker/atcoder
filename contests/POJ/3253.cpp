#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> L(N);

    for(int i = 0; i < N; i++) {
        cin >> L[i];
    }

    ll ans = 0;

    // 板が１本になるまで適用
    while (N > 1) {
        // 一番短い板mii1、次に短い板mii2を求める
        int mii1 = 0, mii2 = 1;
        if (L[mii1] > L[mii2]) swap(mii1, mii2);

        for (int i = 2; i < N; i++) {
            if (L[i] < L[mii1]) {
                mii2 = mii1;
                mii1 = i;
            }
            else if (L[i] < L[mii2]) {
                mii2 = i;
            }
        }

        // それらを併合
        int t = L[mii1] + L[mii2];
        ans += t;

        L[mii1] = t;
        L[mii2] = L[N - 1];
        N--;
    }

    cout << ans << endl;

    return 0;
}