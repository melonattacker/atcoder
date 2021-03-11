#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int K, X;
    cin >> K >> X;

    int left = X - K + 1;
    int right = X + K - 1;

    for(int i = left; i < right+1; i++) {
        cout << i << " ";
    }

    return 0;
}