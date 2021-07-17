#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N;
    string S;
    cin >> N >> S;

    int ans;

    for(int i = 0; i < N; i++) {
        if(S[i] == '1') {
            if((i+1) % 2 == 0) {
                ans = 1;
            } else {
                ans = 0;
            }
            break;
        }
    }

    if(ans == 0) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }

    return 0;
}