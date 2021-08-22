#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int k;
    vector<int> v(5);

    for(int i = 0; i < 5; i++) cin >> v[i];
    cin >> k;

    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v.size(); j++) {
            if(i != j && abs(v[i]-v[j]) > k) {
                cout << ":(" << endl;
                return 0;
            }
        }
    }

    cout << "Yay!" << endl;

    return 0;
}