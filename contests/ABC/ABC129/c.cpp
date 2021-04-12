#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9+7;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> oks(N+1, true);
    for(int i = 0; i < M; i++) {
        int a; 
        cin >> a;
        oks[a] = false;
    }

    vector<ll> dp(N+1);
    dp[0] = 1;

    for(int now = 0; now < N; ++now) {
        for(int next = now+1; next <= min(N,now+2); next++) {
            if(oks[next]) {
                dp[next] += dp[now];
                dp[next] %= mod;
            }
        }
    }

    cout << dp[N] << endl;

    return 0;
}