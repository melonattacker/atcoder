#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

ll N, L, K;
vector<ll> A;

bool solve(ll M) {
    ll cnt = 0, pre = 0;
    for(int i = 0; i < N; i++) {
        if(A[i] - pre >= M && L - A[i] >= M) {
            cnt += 1;
            pre = A[i];
        }
    }
    if(cnt >= K) return true;
    return false;
}

int main() {
    cin >> N >> L >> K;
    A.resize(N);

    for(int i = 0; i < N; i++) cin >> A[i];

    ll left = -1;
    ll right = L + 1;

    while(right - left > 1) {
        ll mid = left + (right - left) / 2;
        if(solve(mid) == false) right = mid;
        else left = mid;
    }

    cout << left << endl;

    return 0;
}