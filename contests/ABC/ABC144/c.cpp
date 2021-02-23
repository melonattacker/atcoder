#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;

    ll min_sum;
    ll min_num;
    for(ll i = 1; i * i <= N; i++) {
        if(i == 1) {
            min_sum = N + N/i; 
            min_num = i;
        }

        if(N % i == 0) {
            if(min_sum > N + N/i) min_num = i;
        }
    }

    ll ans = (min_num - 1) + (N/min_num - 1);

    cout << ans << endl;

    return 0;
}