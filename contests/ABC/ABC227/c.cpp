#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    ll n;
    cin >> n;

    ll ans = 0;
    for(ll a=1; a*a*a<=n; a++){
		for(ll b=a; a*b*b<=n; b++){
			ans+= n/a/b - b +1;
		}
	}
    cout << ans << endl;
    return 0;
}