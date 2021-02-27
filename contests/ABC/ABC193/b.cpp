#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> P(N);
    vector<int> X(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        cin >> P[i];
        cin >> X[i];
    }

    int min_price = 1000000001;
    for(int i = 0; i < N; i++) {
        if(X[i] - A[i] > 0) {
            min_price = min(min_price, P[i]);
        }
    }

    if(min_price == 1000000001) cout << -1 << endl;
    else cout << min_price << endl;

    return 0;
}