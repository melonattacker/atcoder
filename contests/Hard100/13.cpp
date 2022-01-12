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
    int N; string S;
    cin >> N >> S;

    unordered_map<int, bool> mp;
    fore(c, S) mp[c-'0'] = true;

    int ans = 0;
    rep(i, 0, 1000) {
        int x[3] = {i/100, (i/10)%10, i%10};
        int f = 0;
        rep(j, 0, N) {
            // あればSから3文字取り出す
            if(S[j] == ('0'+x[f])) f++;
            if(f == 3) break;
        }
        if(f == 3) ans++;
    }

    cout << ans << endl;

    return 0;
}