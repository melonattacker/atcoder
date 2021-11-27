#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long n,w;
    cin >> n >> w;
    vector<pair<ll, ll>> v(n);
    for(auto &nx: v) {
        cin >> nx.first >> nx.second;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end()); // 美味しさの大きい順に並べる
    ll res = 0;
    for(auto &nx: v) {
        res += nx.first*min(w,nx.second);
        w-=min(w,nx.second);
    }
    cout << res << '\n';
    return 0;
}