#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<double> v(N);

    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    double ans = (v[0]+v[1]) / pow(2.0, N-1);

    for(int i = 2; i < N; i++) {
        ans += v[i] / pow(2.0, N-i);
    }

    cout << ans << endl;

    return 0;
}