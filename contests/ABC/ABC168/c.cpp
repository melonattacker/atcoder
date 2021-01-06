#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B, H, M;
    cin >> A >> B >> H >> M;

    double alpha = (60 * H + M) / 720 * (2 * M_PI);

    double beta = M / 60 * (2 * M_PI);

    double theta = alpha - beta;
    
    double ans = sqrt(A * A + B * B - 2 * A * B * cos(theta));

    cout << std::fixed << std::setprecision(10) << ans << endl;

    return 0;
}