#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << max(a - d, b - c) << endl;

    return 0;
}