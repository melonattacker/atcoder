#include <bits/stdc++.h>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int a = 0;
    int b = 0;

    for(int i = 0; i < (int) A.size(); i++) {
        string s = {A[i]};
        a += stoi(s);
    }

    for(int i = 0; i < (int) B.size(); i++) {
        string s = {B[i]};
        b += stoi(s);
    }

    if(a > b) {
        cout << a << endl;
    } else {
        cout << b << endl;
    }

    return 0;
}