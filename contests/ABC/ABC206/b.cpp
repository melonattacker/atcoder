#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    int money = 0;
    int i = 0;
    while(money < N) {
        i++;
        money += i;
    }

    cout << i << endl;
    return 0;
}