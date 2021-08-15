#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    ll N;
    cin >> N;

    vector<ll> S(N);
    vector<ll> T1(N);
    vector<ll> T2(N);

    for(int i = 0; i < N; i++) cin >> S[i];
    for(int i = 0; i < N; i++) cin >> T1[i];

    for(int i = 0; i < N-1; i++) {
        if(i == 0) {
            T2[i+1] = T1[i] + S[i];
        } else {
            T2[i+1] = min(T1[i], T2[i]) + S[i];
        }
    }

    T2[0] = min(T1[N-1], T2[N-1]) + S[N-1];
    
    for(int i = 0; i < N-1; i++) {
        T2[i+1] = min(T1[i], T2[i]) + S[i];
    }

    for(int i = 0; i < N; i++) {
        cout << min(T1[i], T2[i]) << endl;
        // cout << T1[i] << ", " << T2[i] << endl;
    }

    return 0;
}