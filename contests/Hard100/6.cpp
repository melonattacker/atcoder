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
    string SS, T;
    cin >> SS >> T;

    int N = SS.length();
    int M = T.length();

    set<string> ans;
    rrep(R, N, M) {
        int L = R - M;
        int ok = 1;
        rep(i, 0, M) if(SS[L+i] != '?' and SS[L+i] != T[i]) ok = 0;
        if(ok) {
            string S;
            rep(i, 0, N) S += SS[i];
            rep(i, 0, M) S[L+i] = T[i];
            rep(i, 0, N) if (S[i] == '?') S[i] = 'a'; // ?を可能な限り a に置き換え
            ans.insert(S);
        }
    }

    if(ans.size() == 0) {
        cout << "UNRESTORABLE" << endl;
    } else {
        cout << *(ans.begin()) << endl;
    }

    return 0;
}