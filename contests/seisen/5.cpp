// source : https://atcoder.jp/contests/abc095/tasks/arc096_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1 << 30;
// const long long INF = 1LL << 60;

int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    int ans = INF;

    for(int i = 0; i < 201010; i++) {
        int sum = C * i;
        int x = X - i/2;
        int y = Y - i/2;

        if(0 < x) sum += x * A;
        if(0 < y) sum += y * B;

        ans = min(ans, sum);
    }

    cout << ans << endl;

    return 0;
}