#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

const int MAX_N = 50;

int main() {
    int n, p, posi, wan;

    vector<int> person(MAX_N);

    while(true) {
        cin >> n >> p;
        if(n == 0 && p == 0) break; // nもpも0なら終了
        for(int i = 0; i < n; i++) person[i] = 0; // 最初候補者は石を持っていない
        posi = 0, wan = p; // 最初小石の個数は p 個, お椀は候補者0の所にある

        while(1) {
            if(wan != 0) { // 碗に小石が入っている
                person[posi]++;
                wan--;
                if(person[posi] == p) {
                    cout << posi << endl;
                    break;
                }
            } else { // 碗に小石が入っていない
                wan = person[posi];
                person[posi] = 0;
            }

            posi++;
            if(posi == n) posi = 0;
        }
    }

    return 0;
}