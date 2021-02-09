#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    vector<int> P(N);
    vector<int> Q(N);

    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> Q[i];
    }
    

    iota(v.begin(), v.end(), 1);
    int order = 0;
    int po = 0;
    int qo = 0;
    do{
        order++;

        int pm = 0;
        int qm = 0;

        //vは"次の順列"になる
        for(int i=0;i<N;i++) {
          //vに対してなんらかの操作
            if(v[i] == P[i]) pm++;
            if(v[i] == Q[i]) qm++;
        }

        if(pm == N) po = order;
        if(qm == N) qo = order;

    }while(next_permutation(v.begin(),v.end()));

    if(po > qo) {
        cout << po - qo << endl;
    } else {
        cout << qo - po << endl;
    }

    return 0;
}