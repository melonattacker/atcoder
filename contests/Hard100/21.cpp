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
    rep(i, 0, N) cin >> A[i];
    sort(all(A));

    int ai = A[N-1];
    int aj = A[0];
    rep(i, 0, N-1) if(abs(A[i]-ai/2) <= abs(aj-ai/2)) aj = A[i]; // aiを最大, ajをai/2になるべく近い数を投げる
    cout << ai << " " << aj << endl;

    return 0;
}