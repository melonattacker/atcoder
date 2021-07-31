#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }


int main() {
    priority_queue<ll, vector<ll>, greater<ll> >pq;
    int q, p;
	ll x;
	ll sum = 0;
    cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> p;
        if(p == 1) {
            cin >> x;
            pq.push(x - sum);
        } else if(p == 2) {
            cin >> x;
            sum += x;
        } else if(p == 3) {
            x = pq.top();
            cout << x + sum << endl;
            pq.pop();
        }
    }

    return 0;
}