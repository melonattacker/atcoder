#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, K;
    cin >> A >> B >> C >> K;

    long long ans = 0; 

    if(K <= A) {
        ans += K;

    } else if (A < K && K <= A + B) {
        ans += A;

    } else if(A + B < K && K <= A + B + C) {
        ans += A - (K - A - B);

    }

    cout << ans << endl;

    return 0;
}