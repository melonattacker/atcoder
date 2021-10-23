#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string N;
    cin >> N;
    sort(N.begin(), N.end());
    ll ans = 0;

    do{        
        for(int i = 1; i < N.size(); i++) {
            string pre = N.substr(0, i);
            string pos = N.substr(i, N.size()-i);

            if(pre[0] == '0' || pos[0] == '0') continue;

            // cout << pre << ", " << pos << endl;

            ll prei = stoll(pre);
            ll posi = stoll(pos);

            ans = max(ans, prei * posi);
            // cout << maxi << endl;

        }
    }while(next_permutation(N.begin(),N.end()));
    

    cout << ans << endl;

    return 0;
}