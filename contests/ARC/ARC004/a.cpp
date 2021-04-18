#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> x(N);
    vector<int> y(N);

    for(int i = 0; i < N; i++) {
        cin >> x[i];
        cin >> y[i];
    }

    double maxi = 0;

    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            double dis = 0;
            dis += (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            dis = sqrt(dis);
            maxi = max(maxi, dis);
        }
    }

    cout << maxi << endl;

    return 0;
}