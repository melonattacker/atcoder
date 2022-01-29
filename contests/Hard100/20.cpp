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
    vector<vector<pair<int, int>>> E(100100);
    vector<string> ans(100100);

    rep(i, 0, M) {
        int p, y;
        cin >> p >> y;
        E[p].push_back({y, i});
    }

    rep(i, 1, N+1) {
        sort(all(E[i]));
        int n = E[i].size();
        rep(j, 0, n) {
            std::ostringstream s1;
            s1 << std::setfill('0') << std::setw(6) << i;
            std::ostringstream s2;
            s2 << std::setfill('0') << std::setw(6) << j+1;
            ans[E[i][j].second] = s1.str()+s2.str();
        }
    }

    rep(i, 0, M) cout << ans[i] << endl;

    return 0;
}