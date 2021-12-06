#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll n, a, b;
	ll p, q, r, s;
	ll x, y;
    string str = "";
	vector<string> ans;

    cin >> n >> a >> b;
	cin >> p >> q >> r >> s;

    for (ll i = 0; i < (s - r + 1); i++) str += '.';
	for (ll i = 0; i < (q - p + 1); i++) ans.push_back(str);

    // 黒く塗る
    x = max(p - a, r - b);
	y = min(q - a, s - b);
	for (ll i = x; i <= y; i++) ans[a + i - p][b + i - r] = '#';
    x = max(p - a, b - s);
	y = min(q - a, b - r);
	for (ll i = x; i <= y; i++) ans[a + i - p][b - i - r] = '#';

    for (ll i = 0; i < (q - p + 1); i++) cout << ans[i] << endl;
}