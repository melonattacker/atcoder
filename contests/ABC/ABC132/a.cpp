#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;

    unordered_map<char, int> mp;

    for(int i = 0; i < S.size(); i++) {
        mp[S[i]]++;
    }

    bool ans = true;
    int cnt = 0;

    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cnt++;
        if(itr->second != 2) ans = false;    
    }

    if(cnt != 2) ans = false;

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}