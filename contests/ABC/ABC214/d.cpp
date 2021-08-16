#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<tuple<int, int, int>> edge(N - 1);

    for(auto& [w, u, v] : edge) {
        cin >> u >> v >> w;
        u -= 1;
        v -= 1;
    }

    sort(edge.begin(), edge.end());
    atcoder::dsu dsu(N);
    ll ans = 0;
    for(const auto& [w, u, v] : edge) {
        ans += (ll) w * dsu.size(u) * dsu.size(v);
        dsu.merge(u, v);
    }

    cout << ans << endl;

    return 0;
}