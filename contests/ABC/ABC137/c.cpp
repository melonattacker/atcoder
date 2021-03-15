#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    unordered_map<string, ll> mp;

    ll ans = 0;

    for(int i = 0; i < N; i++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        ans += mp[s];
        mp[s]++;
    }

    cout << ans << endl;

    return 0;
}