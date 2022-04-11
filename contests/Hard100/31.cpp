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

int main() {
    int N;
    cin >> N;

    V<int> A(N+1);
    V<int> B(N+1);
    rep(i, 1, N+1) cin >> A[i];

    for(int i = N; i >= 1; --i) {
        int other = 0;
        for(int x = i*2; x <= N; x += i) if(B[x]) other++;
        if(other % 2 != A[i]) B[i] = 1;
    }

    V<int> ans;
    rep(i, 1, N + 1) if (B[i]) ans.push_back(i);

    int M = ans.size();
    cout << M << endl;
    rep(i, 0, M) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}