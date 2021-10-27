#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W));

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    bool is_ok = true;

    for(int i = 0; i < H-1; i++) {
        for(int j = 0; j < W-1; j++) {
            if(A[i][j] + A[i+1][j+1] > A[i+1][j] + A[i][j+1]) {
                is_ok = false;
            }
        }
    }

    if(is_ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}