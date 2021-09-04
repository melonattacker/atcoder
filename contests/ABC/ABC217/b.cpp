#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    unordered_map<string, bool> mp;
    vector<string> S{"ABC", "ARC", "AGC", "AHC"};

    for(int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        mp[s] = true;
    }

    for(int i = 0; i < S.size(); i++) {
        if(!mp[S[i]]) {
            cout << S[i] << endl;
            return 0;
        }
    }

    return 0;
}