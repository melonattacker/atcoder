#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    double V, T, S, D;
    cin >> V >> T >> S >> D;

    double time = D / V;
    if(time <= S && time >= T) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}