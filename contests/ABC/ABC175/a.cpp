#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            if(s[i] == 'R') {
                count = 1;
            } else {
                continue;
            }
        } else {
            if(s[i] == 'R') {
                if(s[i-1] == 'R') {
                    count++;
                } else {
                    count = 1;
                }
            } else {
                continue;
            }
        }
    }

    cout << count << endl;

    return 0;
}