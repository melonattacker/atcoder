#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;

    for(int i = 0; i < K; i++) {
        if(N % 200 == 0) {
            N /= 200;
        } else {
            string n = to_string(N);
            n += "200";
            N = stol(n);
        }
    }

    cout << N << endl;

    return 0;
}