#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    char last = N.back();


    if(last == '2' || last == '4' || last == '5' || last == '7' || last == '9') {
        cout << "hon" << endl;
    } else if(last == '0' || last == '1' || last == '6' || last == '8') {
        cout << "pon" << endl;
    } else {
        cout << "bon" << endl;
    }

    return 0;
}