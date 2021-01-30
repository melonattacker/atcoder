#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, S, D;
    cin >> N >> S >> D;

    bool ans = false;

    for(int i = 0; i < N; i++) {
        int spell;
        int damage;
        cin >> spell;
        cin >> damage;

        if(spell < S && damage > D) {
            ans = true;
        }
    }

    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}