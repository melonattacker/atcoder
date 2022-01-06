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

    // 計算量は O(MlogM + NlogN)
    V<int> A(N);
    rep(i, 0, N) cin >> A[i];
    sort(A.begin(),A.end()); // Aを小さい順に並べる
    V<pair<int, int>> v(M);
    rep(i, 0, M){
        int B, C; cin >> B >> C;
        v[i] = {C,B};
    }
    sort(v.rbegin(), v.rend()); // Cを大きい順に並べる

    int l = 0;
    for(auto p: v) {
        int cnt = p.second;
        while(cnt-- && A[l] < p.first && l < N) {
            A[l++] = p.first; // Cを大きい順に取り出して最大B個書き換える
        }
    }

    ll ans = 0;
    rep(i, 0, N) ans += 1LL * A[i];
    cout << ans << endl;
    return 0;
}