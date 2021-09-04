#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    ll L, Q;
    cin >> L >> Q;

    vector<ll> c(Q);
    vector<ll> x(Q);

    for(int i = 0; i < Q; i++) {
        cin >> c[i] >> x[i];
    }

    set<int> st;
    st.insert(L);

    for(int i = 0; i < Q; i++) {
        if(c[i] == 1) {
            st.insert(x[i]);
        } else {
            auto it = st.lower_bound(x[i]); 
            if(distance(st.begin(), it) == 0) {
                cout << *it << endl;
            } else {
                cout << *it - *prev(it) << endl;
            }
        }
    }
    return 0;
}