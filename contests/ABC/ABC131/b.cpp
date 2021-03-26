#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, L;
    cin >> N >> L;

    int amount = 0;
    int diff = 40000;
    int aji = 0;

    for(int i = 0; i < N; i++) {
        amount += L + i;
    }

    for(int i = 0; i < N; i++) {
        int temp = diff;
        diff = min(abs(diff), abs(L+i));
        if(temp != diff) aji = L+i;
    }

    cout << amount - aji << endl;

    return 0;
}