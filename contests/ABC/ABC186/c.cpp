#include <bits/stdc++.h>
using namespace std;

bool check(int x){
    stringstream to_s;
    to_s << x << oct << x;
    string s = to_s.str();
    
    return count(s.begin(), s.end(), '7') == 0;
}

int main() {
    int N;
    cin >> N;

    int ans = 0;
    for(int i = 1; i < N+1; i++) {
        ans += check(i);
    }

    cout << ans << endl;

    return 0;
}