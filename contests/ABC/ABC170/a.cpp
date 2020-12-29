#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 5;

    vector<int> input(N);

    for(int i = 0; i < N; i++) {
        cin >> input[i];
        if(input[i] != i+1) {
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}