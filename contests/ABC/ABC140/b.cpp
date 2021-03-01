#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N-1);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }

    for(int i = 0; i < N-1; i++) {
        cin >> C[i];
    }

    int ans = 0;
    int before;

    for(int i = 0; i < N; i++) {
        ans += B[A[i]-1];
        if(i != 0) {
            if(A[i] == before+1) {
                ans += C[before-1];
            }
        }
        before = A[i];
    }

    cout << ans << endl;

    return 0;
}