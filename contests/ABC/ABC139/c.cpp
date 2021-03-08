#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> H(N);
    vector<bool> A(N-1);

    for(int i = 0; i < N; i++) {
        cin >> H[i];
        if(i > 0) {
            if(H[i-1] >= H[i]) A[i-1] = true;
            else A[i-1] = false;
        }
    }

    int maxi = 0;
    int cnt = 0;

    for(int i = 0; i < N-1; i++) {
        if(A[i]) {
            cnt++;
            if(i == N-2) {
                maxi = max(maxi, cnt);
            }
        } else {
            maxi = max(maxi, cnt);
            cnt = 0;
        }
    }

    cout << maxi << endl;

    return 0;
}