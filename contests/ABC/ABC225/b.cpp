#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
using Graph = vector<vector<int>>;

int main() {
    int N;
    cin >> N;

    unordered_map<int, vector<int>> mp;

    for(int i = 0; i < N-1; i++) {
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }

    for(int i = 0; i < N; i++) {
        if(mp[i+1].size() == N-1) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}