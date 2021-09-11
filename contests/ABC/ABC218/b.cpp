#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    vector<int> P(26);

    for(int i = 0; i < P.size(); i++) {
        cin >> P[i];
    }

    string base = "abcdefghijklmnopqrstuvwxyz";
    string ans = "";

    for(int i = 0; i < P.size(); i++) {
        ans += base[P[i]-1];
    }

    cout << ans << endl;

    return 0;
}