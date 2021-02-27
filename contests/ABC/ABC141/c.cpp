#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> P(N);

    for(int i = 0; i < Q; i++) {
        int A;
        cin >> A;
        P[A-1]++;
    }

    for(int i = 0; i < N; i++) {
        if(K - Q + P[i] > 0) cout << "Yes" << endl;
        else cout << "No" << endl; 
    }

    return 0;
}