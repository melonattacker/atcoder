#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> input(N);

    int amount = 0;

    for(int i = 0; i < N; i++) {
        cin >> input[i];
        amount += input[i];
    }


    int count = 0;

    for(int i = 0; i < N; i++) {
        double l_b = (double) amount * (1.0 / (4.0 * M));
        if((double) input[i] >= l_b) {
            count++;
        }
    }

    if(count >= M) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}