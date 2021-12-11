#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    unordered_map<string, int> mp;
    std::set<string> s;

    for(int i = 0; i < N; i++) {
        cin >> S[i];
        mp[S[i]]++;
        s.insert(S[i]);
    }

    int maxi = 0;
    string maxi_name = "";
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if(itr->second > maxi) {
            maxi_name = itr->first;
            maxi = itr->second;
        }
    }

    cout << maxi_name << endl;

    return 0;
}