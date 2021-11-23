#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n = 1 << 20;
    int q;
    cin >> q;

    set<int> s;
    rep(i, n) s.insert(i);
    vector<ll> a(n, -1);
    rep(qi, q) {
        int type; ll x;
        cin >> type >> x;
        if(type == 1) {
            int i = x%n;
            auto it = s.lower_bound(i);
            if(it == s.end()) it = s.begin();
            a[*it] = x;
            s.erase(it);
        } else {
            cout << a[x%n] << endl;
        }
    }
    return 0;
}