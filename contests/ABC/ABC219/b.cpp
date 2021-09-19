#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    vector<string> S(3);
    string T;

    for(int i = 0; i < 3; i++) {
        cin >> S[i];
    }

    cin >> T;

    string ans = "";

    for(int i = 0; i < T.size(); i++) {
        int num = T[i] - '0';
        ans += S[num-1];
    }

    cout << ans << endl;

    return 0;
}