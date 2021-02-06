#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);
    vector<int> t_min(N);

    int minimum = N;

    for(int i = 0; i < N; i++) {
        cin >> P[i];
        minimum = min(minimum, P[i]);
        t_min[i] = minimum;
    }

    int count = 0;

    for(int i = 0; i < N; i++) {
        if(i == 0) {
            count++;
        } else {
            if(P[i] <= t_min[i]) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}