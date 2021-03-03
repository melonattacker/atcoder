#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A, B;
    cin >> A >> B;

    int i = 0;
    int amount = 1;

    while(true) {
        if(amount >= B) break;
        i++;
        amount += A - 1;
    }

    cout << i << endl;

    return 0;
}