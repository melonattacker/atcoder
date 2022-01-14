#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

ll get_digits(ll num){
    return to_string(num).length();
}

int main() {
    ll N;
    cin >> N;

    ll ans = 10;
    for (long long i = 1; i * i <= N; i++) {
		if (N % i == 0) {
            ans = min(ans, max(get_digits(i), get_digits(N/i)));
		}
	}

    cout << ans << endl;

    return 0;
}