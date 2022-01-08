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

    V<string> A(N);
    V<string> B(M);

    rep(i, 0, N) cin >> A[i];
    rep(i, 0, M) cin >> B[i];

    bool exist = false;
    // 計算量はO(N^2M^2)
    rep(lx, 0, N) rep(ly, 0, N) {
        if(ly+M-1 >= N or lx+M-1 >= N) continue;

        bool ok = true;
        rep(y, 0, M) rep(x, 0, M) {
            if(A[ly+y][lx+x] != B[y][x]) ok = false;
        }
        if(ok) exist = true;
    }

    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}