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

    V<string> S(N);
    V<string> T(N);

    unordered_map<string, int> mp;

    rep(i, 0, N) {
        cin >> S[i] >> T[i];
        mp[S[i]]++;
        mp[T[i]]++;
    }

    bool is_ok = true;

    rep(i, 0, N) {
        bool f_ok = true;
        bool s_ok = true;
        rep(j, 0, N) {
            if(i != j) {
                if(S[i] == S[j] || S[i] == T[j]) f_ok = false;
                if(T[i] == S[j] || T[i] == T[j]) s_ok = false;
            }
        }
        if(!f_ok && !s_ok) is_ok = false;
    }

    if(is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}