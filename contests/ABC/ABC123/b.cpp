#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    vector<int> time(5);

    for(int i = 0; i < 5; i++) {
        cin >> time[i];
    }

    int ans = 643;

    for(int i = 0; i < 5; i++) {
        int amount = 0;
        for(int j = 0; j < 5; j++) {
            if(i == j) {
                amount += time[j];
            } else {
                int amari = time[j] % 10;
                if(amari == 0) {
                    amount += time[j];
                } else {
                    amount += time[j] + (10 - amari);
                }
            }
        }

        ans = min(ans, amount);
    }

    cout << ans << endl;

    return 0;
}