#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, A, B;
    cin >> N >> A >> B;


    for(int i = 1; i <= B; i++) {
        int num = N * i;

        if(num >= A && num <= B) {
            cout << "OK" << endl;
            return 0;
        } 
    }

    cout << "NG" << endl;

    return 0;
}