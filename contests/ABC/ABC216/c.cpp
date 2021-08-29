#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    ll N;
    cin >> N;

    const ll len=60;
    auto a = bitset<len>(N);
    string ans(len,'B');
    for(ll i = len-1; i >= 0; i--) {
        if(a[i] == 1) {
            ans.insert(ans.size()-i, "A");
        }
    }

    cout << ans << endl;

    return 0;
}