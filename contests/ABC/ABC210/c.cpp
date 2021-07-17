#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> c(N);
    unordered_map<int, int> mp; 

    for(int i = 0; i < N; i++) {
        cin >> c[i];
    }

    for(int i = 0; i < K; i++) {
        mp[c[i]]++;
    }

    int ans = mp.size();

    for(int i = K; i < N; i++) {
        mp[c[i]]++;
        mp[c[i-K]]--;
        if(mp[c[i-K]] == 0) mp.erase(c[i-K]);
        ans = max(ans, (int)mp.size());
    }

    cout << ans << endl;
   
    return 0;
}