// Ai = 0なるiとAi = 9なるiがともに存在するのは
// 10 ** N - 9 ** N - 9 ** N - 8 ** N

#include <iostream>

const long long mod = 1000000007;

long long powmod(long long x, long long y) {
    long long result = 1;
    for(int i = 0; i < y; i++) {
        result = result * x % mod;
    }
    return result;
}

int main() {
    long long n, ans;
    std::cin >> n;

    ans = powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n);

    // この時点でansが-1000000007より小さい場合をカバーするために以下のように計算
    ans = ans % mod;
    ans = (ans + mod) % mod;

    std::cout << ans << std::endl;

    return 0;
}