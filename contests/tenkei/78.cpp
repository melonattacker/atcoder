#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> a(M);
    vector<int> b(M);

    unordered_map<int, int> mp;

    for(int i = 0; i < M; i++) {
        cin >> a[i] >> b[i];
    }

    for(int i = 0; i < M; i++) {
        if(a[i] > b[i]) mp[a[i]]++;
        if(a[i] < b[i]) mp[b[i]]++;
    }

    int ans = 0;

    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if(itr->second == 1) ans++;
    }

    cout << ans << endl;

    return 0;
}