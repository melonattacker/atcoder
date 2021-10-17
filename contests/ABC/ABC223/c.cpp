#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<double> A(N);
    vector<double> B(N);
    vector<double> time(N);

    int length = 0;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        cin >> B[i];
        length += A[i];
    }

    double amount = 0;

    for(int i = 0; i < N; i++) {
        time[i] = A[i]/B[i];
        amount += time[i];
    }

    double half = amount/2;
    double cnt_t = 0.0;
    double cnt_l = 0.0;

    for(int i = 0; i < N; i++) {
        time[i] = A[i]/B[i];
        cnt_t += time[i];
        cnt_l += A[i];
        // cout << cnt_t << "," << half << endl;
        if(cnt_t >= half) {
            double choka = half - (cnt_t - time[i]);
            // cout << choka << endl;
            double kyori = choka * B[i];
            double ans = (cnt_l - A[i]) + kyori;
            cout << fixed << setprecision(15) << ans << endl;
            // cout << i << endl;
            return 0;
        }
    }

    return 0;
}