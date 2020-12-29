#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    for(int i = 0; i <= X; i++) {
        for(int j = 0; j <= X; j++) {
            if(i+j == X) {
                if(i * 2 + j * 4 == Y) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
}