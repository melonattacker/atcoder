#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, M;
    cin >> N;
    M = 1 << N;
    vector<vector<int>> a(N + 1);
    for(int i = 1, x; i <= M; i++) {
        cin >> x;
        // ベストxで振り分け
        // __builtin_ctz(x) を2進数にした時のお尻の数
        cout << __builtin_ctz(x) << endl;
        a[__builtin_ctz(x)].push_back(i);
    }

    reverse(begin(a), end(a));
    vector<int> ans;

    for(int i = 1; i <= M; i++) {
        int j = __builtin_ctz(i);
        if(a[j].empty()) {
            cout << -1 << endl;
            return 0;
        }

        ans.push_back(a[j].back());
        a[j].pop_back();
    }

    for (int i = 0; i < M; i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}