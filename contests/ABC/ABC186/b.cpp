#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    unordered_map<int, int> ntoq;
    set<int> st;

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            int number;
            cin >> number;
            ntoq[number] += 1;
            st.insert(number);
        }
    }

    int ans = 0;
    int min = *st.begin();

    for(auto x : st) {
        int diff = x - min;
        ans += diff * ntoq[x];
    }

    cout << ans << endl;

    return 0;
}