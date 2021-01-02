#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    for(int i = 0; i < S.size(); i++) cin >> S[i];

    unordered_set<string> h(S.begin(), S.end());

    for(int i = 0; i < S.size(); i++) {
        if(h.count('!' + S[i])) {
            cout << S[i] << endl;
            return 0;
        }
    }

    return 0;
}