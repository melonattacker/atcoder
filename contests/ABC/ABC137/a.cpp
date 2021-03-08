#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A, B;
    cin >> A >> B;

    int maximum = A-B;

    maximum = max(maximum, A+B);
    maximum = max(maximum, A*B);

    cout << maximum << endl;

    return 0;
}