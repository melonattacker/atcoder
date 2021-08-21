#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string S;
    int K;
    cin >> S;
    cin >> K;

    ll cnt = 0;
    sort(S.begin(), S.end());

    do{
        cnt++;
        //vは"次の順列"になる
        // for(int i=0;i<S.size();i++){
        //   //vに対してなんらかの操作
        //   cout << S[i]; 
        // }
        // cout << '\n';
        if(cnt == K) cout << S << endl;
    }while(next_permutation(S.begin(), S.end()));
    
    return 0;
}