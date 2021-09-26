#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int ans = C;

    while(true) {
        if(ans > B) break;
        if(A <= ans && ans <= B) {
            cout << ans << endl;
            return 0;
        }
        ans += C;
    }

    cout << -1 << endl;

    return 0;
}