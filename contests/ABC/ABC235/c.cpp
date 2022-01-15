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
    int N, Q;
    cin >> N >> Q;

    V<int> a(N);
    unordered_map<int, int> cnt;
    unordered_map<int, vector<int>> pos;

    rep(i, 0, N) {
        cin >> a[i];
        cnt[a[i]]++;
        pos[a[i]].push_back(i+1);
    }

    rep(i, 0, Q) {
        int x, k;
        cin >> x >> k;
        if(k > cnt[x]) {
            cout << -1 << endl;
        } else {
            // cout << x << endl;
            cout << pos[x][k-1] << endl;
        }
    }

    return 0;
}