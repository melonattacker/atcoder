#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> W(N);
    vector<int> bubun(N);

    int amount = 0;

    for(int i = 0; i < N; i++) {
        cin >> W[i];
        if(i == 0) bubun[i] = W[i];
        else bubun[i] = bubun[i-1] + W[i];
        amount += W[i];
    }

    int ans = 10000;

    for(int i = 1; i < N; i++) {
        int S1 = bubun[i];
        int S2 = amount - bubun[i];
        ans = min(ans, abs(S1-S2));
    }

    cout << ans << endl;

    return 0;
}