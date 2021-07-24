#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    string S;
    cin >> S;

    int ans = 0;
     
    for(int i = 0; i < S.size()-1; i++) {
        if(S[i] == S[i+1]) {
            int col = S[i]-'0';
            S[i+1] = '0' + ((col + 1) % 2); 
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}