#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    long long ans = 0;

    for(int i = 1; i < N + 1; i++) {
        if(i % 3 == 0 && i % 5 == 0) {

        } else if(i % 3 == 0) {

        } else if(i % 5 == 0) {

        } else {
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}