#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int X;
    cin >> X;

    int num = X / 100;
    cout << 100 * (num + 1) - X << endl;

    return 0;
}