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
        cin >> B[i];
    }

    int a_min = 10000;
    int b_min = 10000;
    int a_i = 0;
    int b_i = 0;

    for(int i = 0; i < N; i++) {
        if(a_min != min(a_min, A[i])) {
            a_i = i;
        }
        if(b_min != min(b_min, B[i])) {
            b_i = i;
        }
        a_min = min(a_min, A[i]);
        b_min = min(b_min, B[i]);
    }

    int ans = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    if(a_i == b_i) {
        if(a_min + b_min < A[1] && a_min + b_min < B[1]) {
            cout << a_min + b_min << endl;
        } else {
            if(min(a_min, b_min) == a_min) {
                cout << max(a_min, B[1]) << endl;
            } else {
                cout << max(b_min, A[1]) << endl;
            }
        }
    } else {
        cout << max(a_min, b_min) << endl;
    }

    return 0;
}