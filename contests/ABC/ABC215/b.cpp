#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    long double N;
    cin >> N;

    int ans = 0;
    for(int i = 0; i < 100; i++) {
        if(i > (int)std::log2(N)) {
            ans = i;
            break;
        }
    }

    cout << ans-1 << endl;
    return 0;
}