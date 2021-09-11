#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    string S;
    cin >> N >> S;

    if(S[N-1] == 'o') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}