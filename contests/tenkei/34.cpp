#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    map<int, int> mp;

    for(int i = 0; i < N; i++) cin >> a[i];

    // 尺取り法
    int r = 0, cnt = 0, ans = 0;
    for(int i = 0; i < N; i++) {
        // iからスタート
        while(r < N) {
            if(mp[a[r]] == 0 && cnt == K) break; // 種類数がKになるまでrを増やす
            if(mp[a[r]] == 0) cnt++; // 種類数のカウントを1増やす
            mp[a[r]]++; // a[r]のカウントを1増やす
            r++; // 位置を1ずらす
        }
        ans = max(ans, r-i); 
        if(mp[a[i]] == 1) cnt--; // a[i]が区間に1つしか含まれていなければ種類数を減らす
        mp[a[i]]--; // a[i]は区間から外れるので1減らす
    }

    cout << ans << endl;

    return 0;
}