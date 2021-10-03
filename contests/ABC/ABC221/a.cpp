#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = 1;

    for(int i = 0; i < A-B; i++) {
        ans *= 32;
    }

    cout << ans << endl;

    return 0;
}