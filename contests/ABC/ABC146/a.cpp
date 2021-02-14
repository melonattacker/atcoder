#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;

    vector<string> s{"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    for(int i = 0; i < s.size(); i++) {
        if(S == s[i]) {
            cout << 7 - (i - 0) << endl;
            return 0;
        }
    }

    return 0;
}