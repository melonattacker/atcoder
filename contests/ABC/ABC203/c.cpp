#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;

    vector<ll> A(N);
    vector<ll> B(N);

    unordered_map<ll, ll> mp;

    ll plus = 0;

    for(int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        mp[A[i]] += B[i];
    }

    std::sort(A.begin(), A.end());

    ll before = A[0];

    for(int i = 0; i < N; i++) {
        if(A[i] <= K + plus) {
            if(i == 0) {
                plus += mp[A[i]];
            } else {
                if(A[i] != before) {
                    plus += mp[A[i]];
                }
            }
        }

        before = A[i];
    }

    cout << K + plus << endl;

    return 0;
}