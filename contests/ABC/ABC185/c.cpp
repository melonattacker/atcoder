#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int l;
    cin >> l;
    long long ans = 1;
    for(int i = 1; i < 12; i++){
        ans *= l - i;
        ans /= i;
    }
    cout << ans << endl;
}