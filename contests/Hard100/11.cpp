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
ll gcd(ll a,ll b){return a?gcd(b%a,a):b;} // 最大公約数
ll lcm(ll a, ll b) { return a * b / gcd(a, b); } // 最小公倍数
map<ll,int> enumpr(ll n) { // 素因数分解
	map<ll,int> V;
	for(ll i=2;i*i<=n;i++) while(n%i==0) V[i]++,n/=i;
	if(n>1) V[n]++;
	return V;
}

int main() {
    ll A, B;
    cin >> A >> B;
    auto ep = enumpr(gcd(A, B));
    int ans = ep.size() + 1;
    cout << ans << endl;
    return 0;
}