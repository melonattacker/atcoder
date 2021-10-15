#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);

    for(int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int ans = 0;

    for(int i = 0; i < N; i++) {
        if(S[i] == "AC") {
            continue;
        } else if(S[i] == "WA") {
            ans++;
        } else if(S[i] == "-") {
            ans++;
        }
    }

    cout << ans * 5 << endl;

    return 0;
}