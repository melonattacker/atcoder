#include <iostream>
#include <vector>

int main() {
    int n;
    long long sum;
    std::cin >> n;

    std::vector<long long> input(n);

    for(int i = 0; i < n; i++) {
        std::cin >> input[i];
    }

    sum = 0;

    for(int i = 1; i < n; i++) {
        if(input[i-1] > input[i]) {
            long long diff = input[i-1] - input[i];
            input[i] += diff;
            sum += diff;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}