#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<ll> A(N);

    ll sum = 0;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }

    ll X;
    cin >> X;

    ll times = X / sum;
    ll amount = sum * times;

    ll ans = times * N;
    
    for(int i = 0; i < N; i++) {
        amount += A[i];
        ans++;
        if(amount > X) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}