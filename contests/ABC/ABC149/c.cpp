#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main() {
    int N;
    cin >> N;

    for(int i = N; i <= 1000000; i++) {
        if(isPrime(i)) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}