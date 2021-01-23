#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int K, N, amount, maximum;
    cin >> K >> N;

    vector<int> input(N);
    vector<int> section(N-1);

    amount = 0;
    maximum = 0;

    for(int i = 0; i < N; i++) {
        cin >> input[i];

        if(i == 0) {

        } else {
            section[i-1] = input[i] - input[i-1];
            amount += section[i-1];
            maximum = max(maximum, section[i-1]);
        }
    }

    int last_section = input[N-1] - input[0];
    if(last_section >= (N / 2)) {
        last_section = K - last_section;
    }

    maximum = max(maximum, last_section);

    cout << amount + last_section - maximum << endl;

    return 0;
}