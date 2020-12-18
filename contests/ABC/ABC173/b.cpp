#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, AC, WA, TLE, RE;
    cin >> N;

    AC = 0;
    WA = 0;
    TLE = 0;
    RE = 0;

    vector<string> input(N);

    for(int i = 0; i < N; i++) {
        cin >> input[i];
    }

    for(int i = 0; i < N; i++) {
        if(input[i] == "AC") {
            AC++;
        } else if(input[i] == "WA") {
            WA++;
        } else if(input[i] == "TLE") {
            TLE++;
        } else if(input[i] == "RE") {
            RE++;
        }
    }

    cout << "AC x " << AC << endl;
    cout << "WA x " << WA << endl;
    cout << "TLE x " << TLE << endl;
    cout << "RE x " << RE << endl;

    return 0;
}