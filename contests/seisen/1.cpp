// source : https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int n, x;

    while(true) {
        cin >> n >> x;
        if(n == 0 && x == 0) break;

        int cnt = 0;

        for(int i = 1; i <= n; i++) {
            for(int j = i+1; j <= n; j++) {
                for(int k = j+1; k <= n; k++) {
                    if(i+j+k == x) {
                        cnt++;
                    }
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}