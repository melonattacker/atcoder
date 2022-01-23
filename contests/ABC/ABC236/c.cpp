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

    vector<string> S(N);
    vector<string> T(N);
    unordered_map<string, bool> mp;

    rep(i, 0, N) cin >> S[i];
    rep(i, 0, M) cin >> T[i];
    rep(i, 0, M) mp[T[i]] = true;

    rep(i, 0, N) {
        if(mp[S[i]]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}