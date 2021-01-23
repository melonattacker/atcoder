#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    int X;
    cin >> N >> X;

    int amount = 0;

    vector<int> input1(N);
    vector<int> input2(N);

    for(int i = 0; i < N; i++) {
        cin >> input1[i];
        cin >> input2[i];
    }

    for(int i = 0; i < N; i++) {
        amount += input1[i] * input2[i];
        if(amount > X*100) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}