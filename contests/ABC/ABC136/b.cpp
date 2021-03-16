#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 桁数
int d(int a) {
    int res = 0;
    while (a) {
        ++res;
        a /= 10;
    }
    return res;
}

int main() {
    int N;
    cin >> N;

    vector<int> input(N);

    int ans = 0;

    for(int i = 1; i <= N; i++) {
        if(d(i) % 2 == 1) {
            ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}