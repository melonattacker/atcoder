#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    unordered_map<string, int> s_to_c;

    for(int i = 0; i < N; i++) {
        string s;
        cin >> s;
        s_to_c[s]++;
    }

    int maxi = 0;

    for(auto itr = s_to_c.begin(); itr != s_to_c.end(); ++itr) {
        maxi = max(maxi, itr->second);
    }

    vector<string> S;

    for(auto itr = s_to_c.begin(); itr != s_to_c.end(); ++itr) {
        if(itr->second == maxi) {
            S.push_back(itr->first);
        }
    }

    sort(S.begin(), S.end());

    for(int i = 0; i < S.size(); i++) {
        cout << S[i] << endl;
    }

    return 0;
}