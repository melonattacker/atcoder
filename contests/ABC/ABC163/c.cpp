#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    unordered_map<int, int> mp;

    for(int i = 1; i < N; i++) {
        int num ;
        cin >> num;
        mp[num]++;
    }

    for(int i = 1; i < N + 1; i++) {
        cout << mp[i] << endl;
    }

    return 0;
}