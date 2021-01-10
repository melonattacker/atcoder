#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> input(2, vector<int>(N));

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < N; j++) {
            cin >> input[i][j];
        }
    }

    int sum = 0;

    for(int i = 0; i < N; i++) {
        sum += input[0][i] *  input[1][i];
    }

    if(sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}