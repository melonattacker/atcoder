#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int N, X;
    cin >> N >> X;

    unordered_map<int, int> fb;  
    unordered_map<int, int> ff;  

    for(int i = 0; i < N; i++) {
        int a;
        cin >> a;
        ff[i+1] = a;
    }

    int next = X;
    int cnt = 0;

    while(true) {
        if(fb[next]) break;
        cnt++;
        fb[next] = true;
        next = ff[next];
    }

    cout << cnt << endl;

    return 0;
}