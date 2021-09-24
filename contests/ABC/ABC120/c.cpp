#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string S;
    cin >> S;

    int cnt[2] = {0, 0};
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == '0') {
            cnt[0]++;
        } else{
            cnt[1]++;
        }
    }

    int ans = min(cnt[0], cnt[1]) * 2;
    cout << ans << endl;

    return 0;
}