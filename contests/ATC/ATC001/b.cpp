#include <atcoder/dsu>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> P(Q);
    vector<int> A(Q);
    vector<int> B(Q);

    for(int i = 0; i < Q; i++) {
        cin >> P[i] >> A[i] >> B[i];
    }

    atcoder::dsu dsu(N);

    for(int i = 0; i < Q; i++) {
        if(P[i] == 0) { // 連結クエリ
            dsu.merge(A[i], B[i]); // 頂点A[i]とB[i]を繋ぐ辺を追加
        } else { // 判別クエリ
            if(dsu.same(A[i], B[i])) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}