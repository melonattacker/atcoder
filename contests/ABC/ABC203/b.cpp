#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;

    int ans = 0;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= K; j++) {
            ans += 100 * i + j;
        }   
    }

    cout << ans << endl;

    return 0;
}