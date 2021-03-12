#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_integer( double x ){
    return std::floor(x)==x;
}

int main() {
    int N, D;
    cin >> N >> D;

    vector<vector<double>> X(N, vector<double>(D));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < D; j++) {
            cin >> X[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            double dis = 0.0;

            for(int k = 0; k < D; k++) {
                dis += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
            }
            dis = sqrt(dis);
            if(is_integer(dis)) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}