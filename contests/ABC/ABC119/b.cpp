#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<int> x(N);
    vector<string> u(N);

    for(int i = 0; i < N; i++) {
        cin >> x[i] >> u[i];
    }

    ll ans = 0;

    for(int i = 0; i < N; i++) {
        if(u[i] == "BTC") {
            ans += 380000 * x[i];
        } else if(u[i] == "JPY") {
            ans += x[i];
        }
    }

    return 0;
}