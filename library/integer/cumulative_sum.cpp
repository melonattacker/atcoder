#include <iostream>
#include <vector>
using namespace std;

// 入力例
// 3
// 1 2 3
int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    B[0] = 0;

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for(int i = 1; i < n+1; i++) {
        B[i] = A[i-1] + B[i-1];
    }

    return 0;
}