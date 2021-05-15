#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    vector<int> a(3);
    a[0] = a1;
    a[1] = a2;
    a[2] = a3;

    do{
        //vは"次の順列"になる
        for(int i=0;i<3;i++){
            //vに対してなんらかの操作
            if(a[2] - a[1] == a[1] - a[0]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }while(next_permutation(a.begin(),a.end()));

    cout << "No" << endl;

    return 0;
}