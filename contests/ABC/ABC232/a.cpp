#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;

    int a = S[0]-'0';
    int b = S[2]-'0';

    cout << a * b << endl;

    return 0;
}