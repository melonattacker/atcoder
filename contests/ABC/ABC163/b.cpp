#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;

    long long amount = 0;

    for(int i = 0; i < M; i++) {
        int time;
        cin >> time;
        amount += time;
    }

    if(N >= amount) {
        cout << N - amount << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}