#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int L, R;
    cin >> L >> R;
    string S;
    cin >> S;

    string rev = "";
    for(int i = L-1; i < R; i++) {
        rev += S[i];
    }
    reverse(rev.begin(), rev.end());

    string ans = "";
    for(int i = 0; i < L-1; i++) {
        ans += S[i];
    }

    ans += rev;

    for(int i = R; i < S.size(); i++) {
        ans += S[i];
    }

    cout << ans << endl;

    return 0;
}