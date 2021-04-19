#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int K, S;
    cin >> K >> S;

    int ans = 0;

    for(int i = 0; i <= K; i++) {
        for(int j = 0; j <= K; j++) {
            if(i + j <= S) {
                int k = S - i - j;
                if(i <= K && j <= K && k <= K) ans++;
            } 
        }
    }

    cout << ans << endl;

    return 0;
}