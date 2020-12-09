#include <iostream>
#include <cmath>

int main() {
    int n, x, t;
    std::cin >> n >> x >> t;

    double times = (double) n / (double) x;
    std::cout << (int) std::ceil(times) * t << std::endl;
    return 0;
}