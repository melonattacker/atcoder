#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;
int main() {
    int n=4;
    vector<int> v(n);
    //1刻みで格納できる関数、便利
    iota(v.begin(), v.end(), 0);
    do{
        //vは"次の順列"になる
        for(int i=0;i<n;i++){
          //vに対してなんらかの操作
          cout << v[i]; 
        }
        cout << '\n';
    }while(next_permutation(v.begin(),v.end()));
}