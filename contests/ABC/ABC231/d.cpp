#include <bits/stdc++.h>
#include<atcoder/all>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int>d(n);
    atcoder::dsu uf(n);
    for(int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        a--, b--;
        if(uf.same(a,b)){
            cout << "No" << endl;
            return 0;
        }
        uf.merge(a,b);
        d[a]++;
        d[b]++;
    }

    for(int i = 0; i < n; i++) {
        if(d[i] > 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}