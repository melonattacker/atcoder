#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<int> p(N);
    vector<int> q(N);

    for(int i = 0; i < N; i++) {
        cin >> p[i];
    }

    for(int i = 0; i < N; i++) {
        q[p[i]-1] = i+1;
    }

    for(int i = 0; i < N; i++) {
        cout << q[i] << " ";
    }

    cout << endl;

    return 0;
}