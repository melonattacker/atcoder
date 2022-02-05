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
    int N;
    cin >> N;

    V<int> A(N);
    V<int> kire(N+1);
    rep(i, 0, N) cin >> A[i];

    int base = 0;

    rep(i, 0, N) {
        kire[i+1] = (base+A[i])%360;
        base += A[i];
    }

    kire.push_back(360);
    sort(kire.begin(), kire.end());

    int ans = 0;

    rep(i, 0, N+1) {
        ans = max(ans, kire[i+1]-kire[i]);
    }

    cout << ans << endl;

    return 0;
}