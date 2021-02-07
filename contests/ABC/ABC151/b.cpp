#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    vector<int> A(N-1);

    for(int i = 0; i < N-1; i++) {
        cin >> A[i];
    }

    int amount = 0;

    for(int i = 0; i < N-1; i++) {
        amount += A[i];
    }

    int ans = M * N - amount;

    if(ans <= 0) {
        cout << 0 << endl;
    } else if(ans > K) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}