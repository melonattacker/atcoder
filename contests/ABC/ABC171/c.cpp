#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    string ans = "";

    while(N != 0) {
        N--;
        ans += (char)('a' + (N % 26));
        N /= 26;
    }

    reverse(ans.begin(), ans.end());
    return 0;
}