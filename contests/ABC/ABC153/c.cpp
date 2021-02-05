#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> H(N);

    ll count = 0;

    for(int i = 0; i < N; i++) {
        cin >> H[i];
    }

    sort(H.begin(), H.end());

    for(int i = N-K-1; i >= 0; i--) {
        count += H[i];
    }

    cout << count << endl;
    return 0;
}