#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int X;
    cin >> X;

    if(0 <= X && X < 40) {
        cout << 40 - X << endl;
    } else if(40 <= X && X < 70) {
        cout << 70 - X << endl;
    } else if(70 <= X && X < 90) {
        cout << 90 - X << endl;
    } else if(90 <= X) {
        cout << "expert" << endl;
    }

    return 0;
}