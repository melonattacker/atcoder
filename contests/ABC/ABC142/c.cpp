#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        B[A[i]-1] = i+1;
    }

    for(int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }

    return 0;
}