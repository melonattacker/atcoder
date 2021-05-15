#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> T(N);
    unordered_map<int, string> mp;

    for(int i = 0; i < N; i++) {
        string s;
        int t;
        cin >> s >> t;
        T[i] = t;
        mp[t] = s;
    }

    sort(T.begin(), T.end());
    cout << mp[T[N-2]] << endl;

    return 0;
}