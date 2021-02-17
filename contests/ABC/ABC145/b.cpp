#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    string S;
    cin >> N >> S;

    if(N % 2 != 0) {
        cout << "No" << endl;
        return 0;
    }

    
    int mid = N / 2;
    string front = S.substr(0, mid);
    string behind = S.substr(mid, N);

    if(front == behind) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}