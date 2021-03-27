#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int H,W,X,Y;
    cin >> H >> W >> X >> Y;

    vector<string> S(H);

    for(int i = 0; i < H; i++) {
        cin >> S[i];
    }

    int ans = 1;

    // 列チェック
    for(int i = Y-2; i >= 0; i--) {
        char s = S[X-1][i];
        if(s == '.') {
            ans++;
        } else {
            break;
        }
    }

    for(int i = Y; i < W; i++) {
        char s = S[X-1][i];
        if(s == '.') {
            ans++;
        } else {
            break;
        }
    }

    // 行チェック
    for(int i = X-2; i >= 0; i--) {
        char s = S[i][Y-1];
        if(s == '.') {
            ans++;
        } else {
            break;
        }
    }

    for(int i = X; i < H; i++) {
        char s = S[i][Y-1];
        if(s == '.') {
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}