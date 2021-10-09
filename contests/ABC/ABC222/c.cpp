#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

pair<int, int> janken(char a, char b) {
    if(a == 'C') {
        if(b == 'C') {
            return make_pair(0, 0);
        } else if(b == 'G') {
            return make_pair(0, 1);
        } else if(b == 'P') {
            return make_pair(1, 0);
        }
    } else if(a == 'G') {
        if(b == 'C') {
            return make_pair(1, 0);
        } else if(b == 'G') {
            return make_pair(0, 0);
        } else if(b == 'P') {
            return make_pair(0, 1);
        }
    } else if(a == 'P') {
        if(b == 'C') {
            return make_pair(0, 1);
        } else if(b == 'G') {
            return make_pair(1, 0);
        } else if(b == 'P') {
            return make_pair(0, 0);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    int N_two = N * 2;

    vector<string> A(N_two+1);
    vector<pair<int, int>> cnt_id(N_two+1);

    for(int i = 1; i <= N_two; i++) {
        string s;
        cin >> s;
        A[i] = s;
    }

    for(int i = 1; i <= N_two; i++) {
        cnt_id[i] = make_pair(0, i);
    }

    for(int i = 0; i < M; i++) {
        for(int j = 1; j <= N; j++) {
            int a = cnt_id[2 * j - 1].second;
            int b = cnt_id[2 * j].second;

            // cout << a << "," << b << endl;

            char a_h = A[a][i];
            char b_h = A[b][i];

            pair<int, int> result = janken(a_h, b_h);
            cnt_id[2 * j - 1].first += result.first; 
            cnt_id[2 * j].first += result.second; 
            // cout << a_h << "," << b_h << endl;
            // cout << cnt_id[2 * j - 1].first << "," << cnt_id[2 * j].first << endl;
        }
        // cout << endl;

        for(int k = 1; k <= N_two; k++) {
            cnt_id[k].second = - cnt_id[k].second;
        }   

        sort(cnt_id.begin()+1, cnt_id.end(), std::greater<std::pair<int, int>>());

        for(int k = 1; k <= N_two; k++) {
            cnt_id[k].second = abs(cnt_id[k].second);
        }
    }

    for(int i = 1; i <= N_two; i++) {
        cout << cnt_id[i].second << endl;
    }

    return 0;
}