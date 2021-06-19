#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    if(N * 108 / 100 < 206) {
        cout << "Yay!" << endl;
    } else if(N * 108 / 100 > 206) {
        cout << ":(" << endl;
    } else {
        cout << "so-so" << endl;
    }
    return 0;
}