#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<ll> X(N);
    vector<ll> Y(N);

    for(int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    nth_element(X.begin(), X.begin() + N / 2, X.end()); // X.begin() + N / 2 より小さい値を前に集める
    nth_element(Y.begin(), Y.begin() + N / 2, Y.end()); // Y.begin() + N / 2 より小さい値を前に集める

    ll ans = 0;

    for(int i = 0; i < N; i++) {
        ans += abs(X[i] - X[N/2]);
        ans += abs(Y[i] - Y[N/2]);
    }

    cout << ans << endl;

    return 0;
}