#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
using mint = modint1000000007;
using Graph = vector<vector<int>>;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

const int mod = 1e9+7;

int mod_pow(long long x,int n){
	long long res=1;
	while(n>0){
		if(n&1)
			res=res*x%mod;
		x=x*x%mod;
		n>>=1;
	}
	return res;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    bool ok = true;
    rep(i, 0, n) ok &= a[i] == (i+n%2)/2*2+(n+1)%2; // N人並んだら左右の人数の絶対値はこうなるよねというコード
    if(ok) cout << mod_pow(2, n/2) << endl;
    else cout << 0 << endl;

    return 0;
}