#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
#define SIZE 100005

unordered_map<ll, bool> mp;

vector<long long> prime_factors(long long N) {
	long long rem = N;
	vector<long long> p;
	for (long long i = 2; i * i <= N; i++) {
		while (rem % i == 0) {
			rem /= i;
			p.push_back(i);
		}
	}
	if (rem != 1LL) {
        // mp[rem] = true;
        // cout << rem << endl;
        p.push_back(rem);
    }
	return p;
}

int main() {
    ll N, M;
    cin >> N >> M;

    vector<ll> A(N);

    vector<bool> fl(SIZE,true);

    for(int i=0;i<N;i++){
        ll a;
        cin >> a;
        vector<ll> v=prime_factors(a);
        for(auto &nx : v){
            if(fl[nx]){
                for(int j=nx;j<SIZE;j+=nx){fl[j]=false;}
            }
        }
    }

    vector<int> res;
    for(int i=1;i<=M;i++){
        if(fl[i]){res.push_back(i);}
    }

    cout << res.size() << '\n';
    for(auto &nx : res){cout << nx << '\n';}
    return 0;
}