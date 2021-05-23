#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<ll> A(N);
    unordered_map<ll, vector<ll>> ab;
    vector<ll> B(N);
    vector<ll> C(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        ab[A[i]].push_back(i+1);
    }

    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }

    for(int i = 0; i < N; i++) {
        cin >> C[i];
    }

    ll ans = 0;

    for(int i = 0; i < N; i++) {
        ll num = B[C[i]-1];
        ans += ab[num].size();
    }

    cout << ans << endl;

    return 0;
}