#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    string X;
    ll M;
    cin >> X >> M;
 
    if(X.size() == 1) {
        if(stoi(X) <= M) cout << 1 << endl;
        else cout << 0 << endl;
        return 0;
    }

    int d = 0;
    for(char c: X) d = max(d, int(c-'0'));
 
    ll left = d;
    ll right = M+1;
    while(right - left > 1) {
        ll mid = (left + right) / 2;
        ll v = 0;
        for(char c: X) {
            if(v > M/mid) v = M+1;
            else v = v*mid + (c-'0');
        }
        if(v <= M) left = mid;
        else right = mid;
    }

    cout << left - d << endl;
    
    return 0;
}