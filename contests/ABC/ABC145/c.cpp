#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    double amount = 0;
    vector<int> x(N);
    vector<int> y(N);

    for(int i = 0; i < N; i++) {
        cin >> x[i];
        cin >> y[i];
    }

    vector<int> v(N);
    iota(v.begin(), v.end(), 0);
    int count = 0;
    do{
        count++;
        //vは"次の順列"になる
        for(int i=0;i<N-1;i++){
            //vに対してなんらかの操作
            int sum_of_sqar = (x[v[i]] - x[v[i+1]]) * (x[v[i]] - x[v[i+1]]) + (y[v[i]] - y[v[i+1]]) * (y[v[i]] - y[v[i+1]]);
            amount += sqrt(sum_of_sqar);
        }
    }while(next_permutation(v.begin(),v.end()));

    cout << std::fixed << std::setprecision(10) << amount / count << endl;
    return 0;
}