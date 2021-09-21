#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int cnt = 0;

int main() {
    int A, B, K;
    cin >> A >> B >> K;
    
    int cnt = 0;
    for(int i = max(A, B); i >= 1; i--) {
        if(A % i == 0 && B % i == 0) {
            cnt++;
            if(cnt == K) {
                cout << i << endl;
            }
        }
    }
    return 0;
}