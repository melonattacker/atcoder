#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    long long X;
    cin >> X;

    long long goal = 100;
    int i = 0;

    while(goal < X) {
        goal += goal / 100; 
        i++;
    }

    cout << i << endl;

    return 0;
}