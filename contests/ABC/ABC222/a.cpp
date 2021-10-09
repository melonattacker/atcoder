#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string N;
    cin >> N;

    int n = (int)N.size();

    for(int i = 0; i < 4 - n; i++) {
        cout << '0';
    }
    cout << N << endl;

    return 0;
}