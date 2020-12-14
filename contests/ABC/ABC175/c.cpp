#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ll X, K, D;
    cin >> X >> K >> D;
    X = abs(X);
    ll straight = min(K, X / D);
    K -= straight;
    X -= straight * D;
    
    if (K % 2 == 0) {
        cout << X << endl;
    } else {
        cout << D - X << endl;
    }
    return 0;
}