#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> SA(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    SA = A;

    sort(SA.begin(), SA.end());

    for(int i = 0; i < N; i++) {
        if(A[i] != SA[N-1]) cout << SA[N-1] << endl;
        else cout << SA[N-2] << endl;
    }
    return 0;
}