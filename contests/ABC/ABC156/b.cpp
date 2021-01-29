#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;

    int ans = 0;

    while(N > 0) {
        N /= K;
        ans++;
    }

    cout << ans << endl;

    return 0;
}