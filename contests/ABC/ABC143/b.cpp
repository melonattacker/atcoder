#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> d(N);

    for(int i = 0; i < N; i++) {
        cin >> d[i];
    }

    int ans = 0;

    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            ans += d[i] * d[j];
        }
    }

    cout << ans << endl;

    return 0;
}