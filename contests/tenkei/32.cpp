#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N, M;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    cin >> M;

    vector<vector<int>> kenaku(N, vector<int>(N));

    for(int i = 0; i < M; i++) {
        int x, y;
        cin >> x, cin >> y;
        kenaku[x-1][y-1] = true;
        kenaku[y-1][x-1] = true;
    }

    vector<int> v(N);
    //1刻みで格納できる関数、便利
    iota(v.begin(), v.end(), 0);

    ll ans = INF;

    do{
        ll sum = 0;
        bool is_ok = true;
        for(int i = 0; i < N; i++){
            sum += A[v[i]][i];
            if(i < N-1 && kenaku[v[i]][v[i+1]]) {
                is_ok = false;
            }
        }
        if(is_ok) ans = min(ans, sum);
    }while(next_permutation(v.begin(),v.end()));

    if(ans != INF) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}