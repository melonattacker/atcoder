#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    double ans = 0;

    for(int i = 0; i < N; i++) {
        double a;
        cin >> a;
        ans += 1.0 / a;
    }

    cout << 1.0/ans << endl;

    return 0;
}