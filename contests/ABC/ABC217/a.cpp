#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    vector<string> S1(2);
    vector<string> S2(2);

    for(int i = 0; i < 2; i++) {
        cin >> S1[i];
        S2[i] = S1[i];
    }

    sort(S2.begin(), S2.end());

    if(S1 == S2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}