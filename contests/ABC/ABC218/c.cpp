#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    vector<string> T(N);

    for(int i = 0; i < N; i++) cin >> S[i];
    for(int i = 0; i < N; i++) cin >> T[i];

    vector<pair<int, int>> S_list;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(S[i][j] == '#') {
                S_list.push_back(make_pair(i, j));
            }
        }
    }

    int cnt_T = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(T[i][j] == '#') {
                cnt_T++;
            }
        }
    }

    if((int) S_list.size() != cnt_T) {
        cout << "No" << endl;
        return 0;
    }

    for(int _ = 0; _ < 4; _++) {
        // 平行移動
        for(int i = -N+1; i < N; i++) {
            // 平行移動
            for(int j = -N+1; j < N; j++) {
                bool flag = true;
                for(auto item: S_list) {
                    int x = item.first;
                    int y = item.second;
                    if(!((0<=x+i && x+i<N) and (0<=y+j && y+j<N) and T[x+i][y+j] == '#')) {
                        flag = false;
                        break;
                    }
                }

                if(flag) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }

        // 90度回転
        vector<pair<int, int>> next_S_list;
        for(auto item: S_list) {
            int x = item.first;
            int y = item.second;
            next_S_list.push_back(make_pair(y, N-1-x));
        }
        S_list = next_S_list;
    }

    cout << "No" << endl;

    return 0;
}