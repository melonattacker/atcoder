#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A;

    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if(num != X) {
            A.push_back(num);
        }
    }

    for(int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }

    return 0;
}