#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    long long K;
    cin >> N >> M >> K;

    vector<long long> amount_A(N+1);
    vector<long long> amount_B(M+1);

    amount_A[0] = 0;
    amount_B[0] = 0;

    for(int i = 1; i < N+1; i++) {
        long long time;
        cin >> time;
        amount_A[i] = amount_A[i-1] + time;
    }

    for(int i = 1; i < M+1; i++) {
        long long time;
        cin >> time;
        amount_B[i] = amount_B[i-1] + time;
    }

    int ans = 0;
    int j = M;

    for(int i = 0; i < N+1; i++) {
        if(amount_A[i] > K) {
            break;
        }
        while(amount_A[i] + amount_B[j] > K) {
            j--;
        }
        ans = max(ans, i + j);
    }

    cout << ans << endl;

    return 0;
}