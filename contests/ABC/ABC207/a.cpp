#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int ans = 0;

    ans = max(A+B, max(B+C, C+A));

    cout << ans << endl;

    return 0;
}