#include <iostream>
#include <vector>

int main() {
    long long n;
    long long total;
    std::cin >> n;

    total = 0;

    std::vector<std::vector<long long> > input(n, std::vector<long long>(2));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            std::cin >> input[i][j];
        }
        long long all = (input[i][1] * (input[i][1] + 1)) / 2;
        long long rm = ((input[i][0] - 1) * (input[i][0])) / 2;
        total += all - rm;
    }
    
    std::cout << total << std::endl;

    return 0;
}