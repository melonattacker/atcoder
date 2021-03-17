#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> H(N);
    vector<int> M(N);

    for(int i = 0; i < N; i++) {
        cin >> H[i];
        if(i == 0) M[i] = H[i];
        else M[i] = max(M[i-1], H[i]);
    } 

    bool ans = true;

    for(int i = 0; i < N; i++) {
        if(H[i] < M[i]-1) ans = false;
    } 

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}