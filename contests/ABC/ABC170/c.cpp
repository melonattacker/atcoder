#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;

    if(N == 0) {
        cout << X << endl;
        return 0;
    }

    vector<int> input(N);

    for(int i = 0; i < N; i++) {
        cin >> input[i];
    }

    int diff = 100;
    int ans;

    for(int i = -100; i < 201; i++) {
        bool exists = find(begin(input), end(input), i) != end(input);
        if(!exists) {
            if(abs(i - X) < diff) {
                diff = abs(i - X);
                ans = i;
            }
        } 
    }

    cout << ans << endl;
}