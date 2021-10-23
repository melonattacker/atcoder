#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    double P;
    cin >> P;

    double a = P/100;
    double b = (100-P)/100;

    double ans = 35 * pow(a, 4) * pow(b, 3);
    ans += 21 * pow(a, 5) * pow(b, 2);
    ans += 7 * pow(a, 6) * b;
    ans += pow(a, 7);

    cout << std::fixed << std::setprecision(12) << ans * 100 << endl;

    return 0;
}