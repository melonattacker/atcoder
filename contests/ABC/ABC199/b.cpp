#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    unordered_map<int, bool> mp;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int res = 0;

    int big, small;
    vector<int> check;

    for(int i = 0; i < N; i++) {
        if(A[i] >= B[i]) big = A[i], small = B[i];
        else big = B[i], small = A[i];

        if(i == 0) {
            vector<int> v;
            for(int j = small; j <= big; j++) {
                v.push_back(j);
            }
            check = v;
        } else {
            vector<int> v;
            for(int j = small; j <= big; j++) {
                for(auto x: check) {
                    if(j == x) {
                        v.push_back(j);
                    }
                }
            }
            check = v;
        }
    }

    cout << check.size() << endl;

    return 0;
}