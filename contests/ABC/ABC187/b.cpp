#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S;
    S = 2;
    cin >> N;

    vector<vector<int>> input(N, vector<int>(S));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < S; j++) {
            cin >> input[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 1; j < N; j++) {
            if(i < j) {
                double tilt = (double) (input[i][1] - input[j][1]) / (double) (input[i][0] - input[j][0]);
                if(tilt >= -1.0 && 1.0 >= tilt) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}