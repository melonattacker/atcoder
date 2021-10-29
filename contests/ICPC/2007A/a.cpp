// Problem A: ICPC 得点集計ソフトウェア
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1 << 30;
// const long long INF = 1LL << 60;

int main() {
    int N;

    while(cin >> N) {
        if(N == 0) break;
        int mini = INF, maxi = 0;
        int sum = 0;
        for(int i = 0; i < N; i++) {
            int x; cin >> x;
            sum += x;
            mini = min(mini, x);
            maxi = max(maxi, x);
        } 

        cout << (sum-maxi-mini)/2 << endl;
    }

    return 0;
}