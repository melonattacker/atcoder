#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, M, K;
    cin >> N >> M;

    vector<int> A(M);
    vector<int> B(M);
    
    for(int i = 0; i < M; i++) {
        cin >> A[i];
        cin >> B[i];
    }

    cin >> K;

    vector<int> C(K);
    vector<int> D(K);


    for(int i = 0; i < K; i++) {
        cin >> C[i];
        cin >> D[i];
    }

    int ans = 0;

    for (int bit = 0; bit < (1<<K); ++bit) {
        vector<int> S;
        unordered_map<int, int> mp;

        for (int i = 0; i < K; ++i) {
            if (bit & (1<<i)) { // "bit"のi桁目が1かどうかチェック
                S.push_back(1);
            } else {
                S.push_back(0);
            }
        }

        // 試す
        for (int i = 0; i < (int)S.size(); ++i) {
            if(S[i] == 0) {
                mp[C[i]]++;
            } else if(S[i] == 1) {
                mp[D[i]]++;
            }
        }

        int count = 0;

        // 条件チェック
        for(int i = 0; i < M; i++) {
            if(mp[A[i]] > 0 && mp[B[i]] > 0) count++;
        }

        ans = max(ans, count);
    }

    cout << ans << endl;

    return 0;
}