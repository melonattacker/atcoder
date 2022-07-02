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

    vector<string> A(N);

    for(int i = 0; i < N; i++) cin >> A[i];

    V<pair<int, int>> ps = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {-1, 1}, {1, -1}, {1, 1}, {-1, -1}};
    vector<string> ans;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            for(auto p: ps) {
                string num = "";
                int x = i, y = j;
                rep(k, 0, N) {
                    x += p.first;
                    y += p.second;
                    if(x == -1) x = N-1;
                    if(y == -1) y = N-1;
                    if(x == N) x = 0;
                    if(y == N) y = 0;
                    num += A[x][y];
                }
                ans.push_back(num);
            }
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans[ans.size()-1] << endl;

    return 0;
}