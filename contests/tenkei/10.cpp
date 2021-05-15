#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<int> c1(n+5,0),c2(n+5,0);
    for(int i = 0; i < n; i++){
        int c;cin>>c;
        int p;cin>>p;
        c1[i+1] = c1[i];
        c2[i+1] = c2[i];
        if(c==1){
            c1[i+1] += p;
        }else{
            c2[i+1] += p;
        }
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int l,r;
        cin>>l>>r;
        cout << c1[r] - c1[l-1] << " " << c2[r] - c2[l-1] << endl;
    }
    return 0;
}