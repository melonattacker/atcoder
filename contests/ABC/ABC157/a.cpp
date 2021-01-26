#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    int page = N / 2;

    if(N % 2 == 0) {
        cout << page << endl;
    } else {
        cout << page + 1 << endl;
    }

    return 0;
}