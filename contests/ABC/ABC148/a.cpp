#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int A, B;
    cin >> A >> B;

    unordered_map<int, bool> mp;

    mp[1] = false;
    mp[2] = false;
    mp[3] = false;

    mp[A] = true;
    mp[B] = true;

    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if(!itr->second) {
            cout << itr->first << endl;
        } 
    }

    return 0;
}