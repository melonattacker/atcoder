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
    int N, M;
    cin >> N >> M;

    V<int> A(N+1), B(M+1), C(N+M+1);
    for(int i = 0; i <= N; i++) cin >> A[i];
    for(int i = 0; i <= N+M; i++) cin >> C[i];
    for(int i = M; i >= 0; i--) {
        B[i] = C[i+N]/A[N];
        for(int j = 0; j <= N; j++) {
            C[i+j] -= B[i] * A[j];
        }
    }
    for(int i = 0; i < M; i++) cout << B[i] << " ";
    cout << B[M] << endl;

    return 0;
}