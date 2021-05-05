#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    int a = 0, b = N - 1;
    string S, T;

    for(int i = 0; i < N; i++) {
        char c;
        cin >> c;
        S += c;
    }

    while (a <= b) {
        // 左から見た場合と右から見た場合を比較
        bool left = false;
        for (int i = 0; a + i <= b; i++) {
            if (S[a+i] < S[b-i]) {
                left = true;
                break;
            } else if (S[a+i] > S[b-i]) {
                left = false;
                break;
            }
        }

        if(left) T += S[a++];
        else T += S[b--];
    }

    cout << T << endl;

    return 0;
}