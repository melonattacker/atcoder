#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    ll H, W, N;
    cin >> H >> W >> N;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> xs;
    vector<int> ys;

    for(int i = 0; i < N; i++) {
        ll x, y; 
        cin >> x >> y;
        A[i] = x;
        B[i] = y;
        xs.push_back(x);
        ys.push_back(y);
    }

    sort(begin(xs), end(xs));
    sort(begin(ys), end(ys));
    xs.erase(unique(begin(xs), end(xs)), end(xs));
    ys.erase(unique(begin(ys), end(ys)), end(ys));

    for(int i = 0; i < N; i++) {
        auto s = lower_bound(begin(xs), end(xs), A[i]) - begin(xs);
        auto t = lower_bound(begin(ys), end(ys), B[i]) - begin(ys);
        cout << s + 1 << " " << t + 1 << "\n";
    }
    
    return 0;
}