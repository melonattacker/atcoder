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


int main() {
    ll N;
    cin >> N;

    if(N % 2 == 1) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = N / 10;
    N /= 10;
    
    ll p5 = 5;
    while(p5 <= N) {
        ans += N / p5;
        p5 = p5 * 5;
    }

    cout << ans << endl;

    return 0;
}