#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W, 0));

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    vector<long long> yoko(H);
    vector<long long> tate(W);

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) yoko[i] += A[i][j]; 
    }

    for(int j = 0; j < W; j++) {
        for(int i = 0; i < H; i++) tate[j] += A[i][j]; 
    }

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cout << yoko[i] + tate[j] - A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}