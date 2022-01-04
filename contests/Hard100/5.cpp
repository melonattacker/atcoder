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
    int N, M;
    cin >> N >> M;
    priority_queue<int> q;

    rep(i, 0, N) {
        int a;
        cin >> a;
        q.push(a);
    }

    rep(i, 0, M) {
        int a = q.top(); 
        q.pop();
        q.push(a/2);
    }

    ll ans = 0;
    rep(i, 0, N) {
        ans += q.top();
        q.pop();
    }

    cout << ans << endl;
    return 0;
}