#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N, W;
    cin >> N >> W;

    vector<ll> v(N);
    vector<ll> w(N);

    vector<vector<ll>> dp(N+1, vector<ll>(N*1000+1));

    for(int i = 0; i < N; i++) {
        cin >> v[i] >> w[i];
    }

    ll INF = 1LL<< 60;
    for(int i = 0; i < N; i++) {
        // 価値を実現できないところはINFを挿入
        for(int j = 1; j <= N*1000; j++) dp[i][j] = INF;
    }

    for(int i = 0; i < N; i++) {
        // 下におろす
        for(int j = 0; j <= N*1000; j++) dp[i+1][j] = dp[i][j];
        for(int j = 0; j <= N*1000; j++) {
            // 添え字が負になるjは飛ばす
            if(j - v[i+1] < 0) continue;
            // dp[i+1][j]: 荷物がi+1番目まで選択可能で価値の和がjの状態を実現する最小の重さ
            dp[i+1][j] = min(dp[i+1][j], dp[i][j-v[i+1]] + w[i+1]);
        }
    }

    // DPテーブルを用いて値がW以下である価値の最大を求める
    int ans = 0;
    for(int i = N*1000; i >= 0; i--) {
        // W以下の時のiが答え
        if(dp[N][i] <= W) {
            ans = i+1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}