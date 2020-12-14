#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
    long long ans = 1;
    for(int i = 1; i < k+1; i++){
        ans *= n + 1 - i;
        ans /= i;
    }
    cout << ans << endl;
}