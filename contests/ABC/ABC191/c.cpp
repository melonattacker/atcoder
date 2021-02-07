#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> S(H, vector<int>(W));

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            char c;
            cin >> c;
            if(c == '.') {
                S[i][j] = 0;
            } else {
                S[i][j] = 1;
            }
        }
    }

    int edge = 0;

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            int b_c = 0;
            if(i != H - 1 && j != W - 1) {
                if(S[i][j] == 1) b_c++;
                if(S[i][j+1] == 1) b_c++;
                if(S[i+1][j] == 1) b_c++;
                if(S[i+1][j+1] == 1) b_c++;
            }
            
            if(b_c == 1 || b_c == 3) edge++;
        }
    }

    cout << edge << endl;

    return 0;
}