#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> L(N);
    vector<int> D(N);

    D[0] = 0;
    int ans = 0;

    for(int i = 0; i < N; i++) {
        cin >> L[i];
    }

    for(int i = 0; i < N+1; i++) {
        if(i > 0) {
            D[i] = D[i-1] + L[i-1];
        }
        if(D[i] <= X) ans++;
    }

    cout << ans << endl;

    return 0;
}