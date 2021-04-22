#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;

    int N = S.size();
    ll res = 0;

    for(int bit = 0; bit < (1<<(N-1)); ++bit) {
        ll temp = 0;
        for(int i = 0; i < N-1; ++i) {
            temp *= 10;
            temp += S[i] - '0';
            if (bit & (1<<i)) {
                res += temp;
                temp = 0;
            }
        }
        temp *= 10;
        temp += S.back() - '0';
        res += temp;
    }

    cout << res << endl;

    return 0;
}