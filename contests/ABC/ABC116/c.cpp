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

vector<int> H(200);
int ans = 0;
void f(int l, int r) {
    if(l >= r) return;

    int mi = inf;
    rep(i, l, r) chmin(mi, H[i]);

    ans += mi;
    rep(i, l, r) H[i] -= mi; // 最小値で引く

    vector<int> zero;
    zero.push_back(-1);
    rep(i, l, r) if(H[i] == 0) zero.push_back(i); // 0になったものをメモ
    zero.push_back(r);

    int n = zero.size();
    rep(i, 0, n-1) f(zero[i]+1, zero[i+1]); // 0で囲まれた区間を調査
}

int main() {
    int N;
    cin >> N;

    rep(i, 0, N) cin >> H[i];

    f(0, N);

    cout << ans << endl;

    return 0;
}