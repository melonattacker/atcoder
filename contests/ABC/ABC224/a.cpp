#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string S;
    cin >> S;

    if(S.substr((int)S.size()-2, 2) == "er") {
        cout << "er" << endl;
        return 0;
    }

    if(S.substr((int)S.size()-3, 3) == "ist") {
        cout << "ist" << endl;
        return 0;
    }

    return 0;
}