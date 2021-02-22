#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A, B;
    cin >> A >> B;

    if(1 <= A && A <= 9 && 1 <= B && B <= 9) cout << A * B << endl;
    else cout << -1 << endl;

    return 0;
}