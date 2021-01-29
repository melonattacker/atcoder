#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> X(N);

    int ans = 1000000;

    for(int i = 0; i < N; i++) {
        cin >> X[i];
    }

    for(int i = 0; i < 100; i++) {
        int amount = 0;

        for(int j = 0; j < N; j++) {
            amount += (X[j] - i) * (X[j] - i);
        }

        ans = min(ans, amount);
    }

    cout << ans << endl;

    return 0;
}