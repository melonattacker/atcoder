#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

vector<long long> prime_factors(long long N) {
	long long rem = N;
	vector<long long> p;
	for (long long i = 2; i * i <= N; i++) {
		while (rem % i == 0) {
			rem /= i;
			p.push_back(i);
		}
	}
	if (rem != 1LL) p.push_back(rem);
	return p;
}

int main() {
	ll N;
    cin >> N;

    int ans = 0;
    vector<long long> vec = prime_factors(N);
    for (int i = 0; i <= 20; i++) {
		if ((1 << i) >= (int)vec.size()) { ans = i; break; } // 2^x >= Kを満たす最小のxを見つける
	}
	cout << ans << endl;
	return 0;
}