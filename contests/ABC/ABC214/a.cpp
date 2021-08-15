#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    if(1 <= N and N <= 125) {
        cout << 4 << endl;
    } else if(126 <= N and N <= 211) {
        cout << 6 << endl;
    } else if(212 <= N and N <= 214) {
        cout << 8 << endl;
    }

    return 0;
}