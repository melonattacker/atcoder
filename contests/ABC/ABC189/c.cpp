#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);

    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int ans = 0;

    for(int i = 0; i < N; i++) {
        int x = a[i];
        for(int j = i; j < N; j++) {
            x = min(x, a[j]);
            ans = max(ans, x*(j-i+1));
        }
    }

    cout << ans << endl;

    return 0;
}