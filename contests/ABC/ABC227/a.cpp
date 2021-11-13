#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, K, A;
    cin >> N >> K >> A;

    int pos = A;

    for(int i = 0; i < K; i++) {
        if(i == K-1) break;
        if(pos == N) {
            pos = 1;
        } else {
            pos++;
        }
    }

    cout << pos << endl;
    return 0;
}