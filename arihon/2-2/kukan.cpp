// 例題: 区間スケジューリング問題
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> S(N);
    vector<int> T(N);
    // 仕事をソートするためのpairの配列
    pair<int, int> itv[N];

    for(int i = 0; i < N; i++) {
        cin >> S[i];
    }

    for(int i = 0; i < N; i++) {
        cin >> T[i];
    }

    // pairは辞書順で比較される
    // 終了時間の早い順にしたいため、Tをfirstに、Sをsecondに入れる
    for(int i = 0; i < N; i++) {
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv, itv+N);

    // tは最後に選んだ仕事の終了時間
    int ans = 0, t = 0;
    for(int i = 0; i < N; i++) {
        if(t < itv[i].second) {
            ans++;
            t = itv[i].first;
        }
    }

    cout << ans << endl;

    return 0;
}