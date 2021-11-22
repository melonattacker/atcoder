#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define ALL(a)  (a).begin(),(a).end()

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> P(N);
    vector<int> sP(N);

    for(int i = 0; i < N; i++) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        P[i] = p1 + p2 + p3;
        sP[i] = p1 + p2 + p3;
    }

    sort(sP.begin(), sP.end(), std::greater<int>());

    // for(int i = 0; i < N; i++) {
    //     cout << sP[i] << ",";
    // }
    // cout << endl;

    for(int i = 0; i < N; i++) {
        if(P[i]+300 >= sP[K-1]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}