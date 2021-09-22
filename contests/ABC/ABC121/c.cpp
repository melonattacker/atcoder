#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<ll, ll>> AB(N);

    for(int i = 0; i < N; i++) {
        cin >> AB[i].first >> AB[i].second;
    }

    sort(AB.begin(), AB.end());

    int cnt = 0;
    ll ans = 0;

    for(int i = 0; i < N; i++) {
        if(cnt + AB[i].second > M) {
            ans += AB[i].first * (M - cnt);
            break;
        } else {
            ans += AB[i].first * AB[i].second;
            cnt += AB[i].second;
        }
    }

    cout << ans << endl;
    return 0;
}