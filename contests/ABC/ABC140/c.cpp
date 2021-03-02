#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> B(N-1);

    for(int i = 0; i < N-1; i++) {
        cin >> B[i];
    }

    int ans = 0;

    for(int i = 0; i < N; i++) {
        if(i == 0) {
            ans += B[0];
        } else if(i == N-1) {
            ans += B[N-2];
        } else {
            ans += min(B[i-1], B[i]);
        }
    }

    cout << ans << endl;

    return 0;
}