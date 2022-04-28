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

 
int H, W, K, A[309][309], num;
int cnt[309];
char c[309][309];

void solve(int cl, int cr) {
    vector<int> P;
    for(int i = cl; i <= cr; i++) {
        for(int j = 1; j <= W; j++) {
            if(c[i][j] == '#') P.push_back(j);
        }
    }
    sort(P.begin(), P.end());

    for(int i = 0; i < P.size(); i++) {
        int v1 = 1, v2 = W;
        if(i >= 1) v1 = P[i-1]+1;
        if(i < (int)P.size()-1) v2 = P[i];
        num++;
        for(int j = cl; j <= cr; j++) {
            for(int k = v1; k <= v2; k++) A[j][k] = num;
        } 
    }
}

int main() {
    cin >> H >> W >> K;

    for(int i = 1; i <= H; i++) {
        for(int j = 1; j <= W; j++) {
            cin >> c[i][j];
            if (c[i][j] == '#') cnt[i]++;
        }
    }

    V<int> v;
    for(int i = 1; i <= H; i++) if(cnt[i] >= 1) v.push_back(i);
    for(int i = 0; i < v.size(); i++) {
        int v1 = 1, v2 = H;
        if(i >= 1) v1 = v[i-1]+1;
        if(i < (int)v.size()-1) v2 = v[i];
        solve(v1, v2); 
    }

    for(int i = 1; i <= H; i++) {
        for(int j = 1; j <= W; j++) {
            if(j >= 2) cout << " "; cout << A[i][j];
        }
        cout << endl;
    }
    return 0;
}