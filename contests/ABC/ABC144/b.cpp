#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    bool is_ok = false;
    for(int i = 1; i < 10; i++) {
        if(N % i == 0 && 1 <= (N/i) && (N/i) <= 9) {
            is_ok = true;
            break;
        }
    }

    if(is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}