#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

ll baseK_to_long(string N, ll K) {
	ll res = 0;
	for (int i = 0; i < N.size(); ++i) {
		res = res * K + int(N[i] - '0');
	}
	return res;
}


int main() {
    ll K;
    string A, B;
    cin >> K >> A >> B;

    ll ans = baseK_to_long(A, K) * baseK_to_long(B, K);

    cout << ans << endl;

    return 0;
}