#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N;
    cin >> N;

    vector<int> H(N);

    for(int i = 0; i < N; i++) {
        cin >> H[i];
    }

    int ans = 1;

    for(int i = 1; i < N; i++) {
        bool is_ok = true;
        for(int j = 0; j < i; j++) {
            if(H[j] > H[i]) {
                is_ok = false;
                break;
            }
        }   

        if(is_ok) ans++;
    }

    cout << ans << endl;

    return 0;
}