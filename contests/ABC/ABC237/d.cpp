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
    ll n; string s;
    cin >> n >> s;
    deque<ll>a={n};
    for(int i = n-1; i >=0; i--) {
        if(s[i]=='L') a.push_back(i);
        else a.push_front(i);
    }

    for(int i = 0; i <= n; i++) {
        if(i < n) cout << a[i] << " ";
        else cout << a[i] << endl;
    }

    return 0;
}