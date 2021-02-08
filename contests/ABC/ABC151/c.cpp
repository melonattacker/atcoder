#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> v(N);

    int solve = 0;
    int penalty = 0;

    for(int i = 0; i < M; i++) {
        int num;
        string result;
        cin >> num;
        cin >> result;
        
        if(result == "AC") {
            if(v[num-1].second == 0) {
                solve++;
                penalty += v[num-1].first;
            }
            v[num-1].second++;
        } else {
            v[num-1].first++;
        }
    }

    cout << solve << " " << penalty << endl;

    return 0;
}