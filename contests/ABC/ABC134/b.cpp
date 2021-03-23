#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, D;
    cin >> N >> D;

    int i = 0;
    int amount = 0;

    while(true) {
        i++;
        amount += 2 * D + 1;
        if(amount >= N) {
            break;
        }
    }

    cout << i << endl;

    return 0;
}