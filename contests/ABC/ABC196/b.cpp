#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string X;
    cin >> X;

    for(int i = 0; i < X.size(); i++) {
        if(X[i] == '.') {
            cout << X.substr(0, i) << endl;
            return 0;
        }
    }

    cout << X << endl;
    return 0;
}