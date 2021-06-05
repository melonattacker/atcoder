#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int fib(int i, vector<int>& A) {
    if(i == 0) {
        A[0] = 1;
        return 1;
    } 
    if(i == 1) {
        A[1] = 1;
        return 1;
    }

    A[i-1] = fib(i-1, A);
    A[i-2] = fib(i-2, A);
    return A[i-1] + A[i-2];
}

int main() {
    vector<int> A(100);

    cout << fib(29, A) << endl;

    return 0;
}