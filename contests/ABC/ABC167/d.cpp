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
    ll N, K;
    cin >> N >> K;
    V<ll> A(N);
    rep(i, 0, N) cin >> A[i];
    V<int> p;
    unordered_map<int, bool> mp;

    int pos = 1;
    int loop;
    while(true) {
        if(mp[pos]) {
            loop = pos;
            break;
        }
        mp[pos] = true;
        p.push_back(pos);
        int n_pos = A[pos-1];
        pos = n_pos;
    }

    ll b_cnt = 0;
    ll l_cnt = 0;
    bool flag = false;
    rep(i, 0, p.size()) {
        if(p[i] == pos) flag = true;
        if(!flag) b_cnt++;
        else l_cnt++;
    }

    if(K < b_cnt) cout << p[K] << endl;
    else {
        K -= b_cnt;
        K %= l_cnt;
        cout << p[b_cnt + K] << endl;
    }

    return 0;
}