#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    unordered_map<string, vector<int>> cc;
    unordered_map<int, int> pc;

    for(int i = 0; i < N; i++) {
        string s;
        int p;
        cin >> s;
        cin >> p;
        cc[s].push_back(p);
        S[i] = s;
        pc[p] = i+1;
    }

    sort(S.begin(), S.end());

    string before = "hoge";
    for(int i = 0; i < N; i++) {
        if(before != S[i]) {
            sort(cc[S[i]].begin(), cc[S[i]].end(), std::greater<int>());
            for(int j = 0; j < cc[S[i]].size(); j++) {
                cout << pc[cc[S[i]][j]] << endl;
            }
        }   
        before = S[i];
    }

    return 0;
}