#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<int> A(pow(2, N) + 1);
    unordered_map<int, int> pos;

    A[0] = 0;

    for(int j = 1; j <= pow(2, N); ++j) {
        cin >> A[j];
        pos[A[j]] = j;
    }

    for(int i = 1; i <= N; i++) {
        vector<int> temp;
        for(int j = 1; j < pow(2, N-i) + 1; j++) {
            // cout << 2 * j - 1 << ", " << 2 * j << " : " << A[2 * j - 1] << ", " << A[2 * j] << endl;
            if(A[2 * j - 1] > A[2 * j]) {
                // A.erase(A.begin() + 2 * j);
                temp.push_back(2*j);
                if(i == N) {
                    cout << pos[A[2 * j]] << endl;
                }
            } else if(A[2 * j - 1] < A[2 * j]) {
                // A.erase(A.begin() + 2 * j - 1);
                temp.push_back(2*j-1);
                if(i == N) {
                    cout << pos[A[2 * j-1]]<< endl;
                }
            }
        }

        for(int i = 0; i < (int) temp.size(); i++) {
            A.erase(A.begin() + temp[i] - i);
        }
    }
}