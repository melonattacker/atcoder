#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    bool is_ok = true;

    for(int i = 0; i < N; i++) {
        cin >> A[i];

        if(A[i] % 2 == 0) {
            if(!(A[i] % 3 == 0 || A[i] % 5 == 0)) {
                is_ok = false;
            }
        }
    }

    if(is_ok) {
        cout << "APPROVED" << endl;

    } else {
        cout << "DENIED" << endl;
    }
    

    return 0;
}