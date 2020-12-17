#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    long long K;
    cin >> K;

    vector<long long> v(1000001);

    v[1] = 7 % K;

    for(int i = 2; i <= K; i++) {
        v[i] = (v[i-1] * 10 + 7) % K;
    }

    for(int i = 1; i <= K; i++) {
        if(v[i] % K == 0) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}