#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    vector<int> S(N);

    for(int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int cnt = 0;

    for(int i = 0; i < N; i++) {
        bool ok = false;
        for(int a = 1; a < 1000; a++) {
            for(int b = 1; b < 1000; b++) {
                if(4 * a * b + 3 * a + 3 * b == S[i]) {
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }
        if(!ok) cnt++;
    }

    cout << cnt << endl;
    
    return 0;
}