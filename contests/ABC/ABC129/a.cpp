#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int P, Q, R;
    cin >> P >> Q >> R;

    vector<int> v(3);

    v[0] = P;
    v[1] = Q;
    v[2] = R;
    int ans = 300;

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            if(i != j) {
                int dis = v[i] + v[j];
                ans = min(ans, dis);
            }
        }
    }

    cout << ans << endl;

    return 0;
}