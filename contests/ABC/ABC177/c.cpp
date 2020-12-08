#include <iostream>
#include <vector>

int main() {
    int n;
    long long sum;
    const long long mod = 1000000007;
    std::cin >> n;

    std::vector<long long> input(n);
    std::vector<long long> cum_sum(n + 1);

    std::cin >> input[0];
    cum_sum[0] = 0;

    for(int i = 1; i <= n; i++) {
        if(i != n) {
            std::cin >> input[i];
        }
        cum_sum[i] = (cum_sum[i-1] + input[i-1]) % mod;
    }

    sum = 0;

    for(int i = 0; i < n - 1; i++) {
        long long diff = cum_sum[n] - cum_sum[i+1];
        if(diff < 0) {
            diff += mod;
        }
        sum += input[i] * diff;
        sum %= mod;
    }

    std::cout << sum << std::endl;

    return 0;
}