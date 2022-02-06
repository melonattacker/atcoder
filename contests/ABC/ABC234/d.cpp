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
    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    rep(i, 0, n) cin >> p[i];
    priority_queue<int, vector<int>, greater<int>> q;
    rep(i, 0, k-1) q.push(p[i]);

    rep(i, k-1, n) {
        q.push(p[i]);
        while(q.size() > k) q.pop();
        cout << q.top() << endl;
    } 
    
    return 0;
}