#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, S;
    cin >> N >> S;

    vector<vector<int>> input(N, vector<int>(S));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < S; j++) {
            cin >> input[i][j];
        }
    }

    return 0;
}