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
    int N, K;
    cin >> N >> K;

    V<string> S(N);
    rep(i, 0, N) cin >> S[i];

    int ans = 0;
    for (int bit = 0; bit < (1<<N); ++bit) {
        unordered_map<char, int> mp;
        for (int i = 0; i < N; ++i) {
            if (bit & (1<<i)) { // "bit"のi桁目が1かどうかチェック
                for(int j = 0; j < S[i].size(); j++) mp[S[i][j]]++;
            }
        }

        int cnt = 0;
        for(auto p: mp) {
            if(p.second == K) cnt++;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}