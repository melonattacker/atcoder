#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    unordered_map<string, bool> mp;

    int ans = 0;

    for(int i = 0; i < N; i++) {
        string s;
        cin >> s;

        if(!mp[s]) {
            ans++;
            mp[s] = true;
        }
    }

    cout << ans << endl;

    return 0;
}