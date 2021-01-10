#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, K, ans;
    cin >> N >> K;

    ans = 0;

    unordered_map<int, bool> up;

    for(auto itr = up.begin(); itr != up.end(); ++itr) {
        up[itr->first] = false;
    }

    for(int i = 0; i < K; i++) {
        int d ;
        cin >> d;
        for(int j = 0; j < d; j++) {
            int hunuke;
            cin >> hunuke;
            up[hunuke] = true;
        }
    }

    for(int i = 1; i <= N; i++) {
        if(!up[i]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}