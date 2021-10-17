#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string S;
    cin >> S;

    string maxi = S;
    string mini = S;

    for(int i = 0; i < S.size(); i++) {
        char head = S[0];
        S.erase(0,1);
        S.push_back(head);
        
        if(maxi > S) {
            maxi = S;
        }

        if(mini < S) {
            mini = S;
        }
    }

    cout << maxi << endl;
    cout << mini << endl;

    return 0;
}