#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> d(N);

    for(int i = 0; i < N; i++) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    cout << d[N/2]-d[N/2-1] << endl;

    return 0;
}