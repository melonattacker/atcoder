#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> input(N);

    for(int i = 0; i < N; i++) {
        cin >> input[i];
    }

    std::sort(input.begin(), input.end());

    int ans = 0;

    for(int i = 0; i < K; i++) {
        ans += input[i];
    }

    cout << ans << endl;

    return 0;
}