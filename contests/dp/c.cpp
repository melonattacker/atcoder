#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N;
    cin >> N;

    vector<vector<ll>> abc(100010, vector<ll>(3));
    vector<vector<ll>> dp(100010, vector<ll>(3));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> abc[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(j == k) continue;
                chmax(dp[i+1][k], dp[i][j] + abc[i][k]);
            }
        }
    }

    ll res = 0;
    for(int i = 0; i < 3; i++) chmax(res, dp[N][i]);
    cout << res << endl;

    return 0;
}