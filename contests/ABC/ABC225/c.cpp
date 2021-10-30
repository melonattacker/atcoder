#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> B(N, vector<int>(M));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> B[i][j];
        }
    }

    vector<vector<int>> x(N,vector<int>(M)), y(N,vector<int>(M));

    bool is_ok = true;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            x[i][j] = (B[i][j]+6)/7;
            y[i][j] = (B[i][j]-1)%7+1;
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(0 < i && x[i][j] != x[i-1][j]+1) is_ok = false;
            if(0 < j && y[i][j] != y[i][j-1]+1) is_ok = false;
        }
    }

    if(is_ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}