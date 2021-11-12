#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int t;
    cin >> t;

    while(t>0) {
        t--;
        ll n, m;
        cin >> n >> m;
        cout << max(1ll, n-m) << ' ';
        ll st = 1, fi = 1500000000, te;
        while(st <= fi) {
            te = (st + fi)/2;
            if((te * (te-1))/2 < m) {
                st = te + 1;
            } else {
                fi = te - 1;
            }
        }
        cout << n-st+1 << endl; // n-st : ぼっちになった数
    }

    return 0;
}