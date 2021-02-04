#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int H, N;
    cin >> H >> N;

    for(int i = 0; i < N; i++) {
        int a;
        cin >> a;
        H -= a;
    }

    if(H <= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}