#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define N 200100
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll t[N];
int k[N];
vector<int> e[N];
bool used[N];

int main() {
    int n, x;
    ll ans = 0;
    for(int i = 0; i < N; i++) used[i] = false;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t[i];
        cin >> k[i];
        for(int j = 0; j < k[i]; j++) {
            cin >> x;
            e[i].push_back(x-1);
        }
    }

    used[n-1] = true;
    for(int i = n-1; i >= 0; i--) {
        if(used[i]) {
            ans += t[i];
            for(int j = 0; j < k[i]; j++) {
                used[e[i][j]] = true;
            }
        }
    }

    cout << ans << endl;

    return 0;
}