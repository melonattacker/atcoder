#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    // int N, M, Q;
    // cin >> N >> M >> Q;

    // vector<vector<int>> input(Q, vector<int>(4));

    // for(int i = 0; i < Q; i++) {
    //     for(int j = 0; j < 4; j++) {
    //         cin >> input[i][j];
    //     }
    // }

    int N = 3;
    int M = 4;

    vector<vector<int>> comb;

    for (int bit = 0; bit < (1<<M+1); ++bit) {
        int count = 0;
        vector<int> S;
        for (int i = 0; i < M; ++i) {
            if (bit & (1<<i)) { // "bit"のi桁目が1かどうかチェック
                count++;
                S.push_back(i+1);
            }
        }

        if(count == N) {
            comb.push_back(S);
        }
    }

    for(int j = 0; j < (int)comb.size(); j++) {
        cout << j << ": {";
        for (int i = 0; i < 3; ++i) {
            cout << comb[j][i] << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}