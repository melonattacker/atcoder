#include <iostream>

int main() {
    int N;
    std::cin >> N;

    if(N % 1000 == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }

    int payment = N / 1000 + 1;
    int charge = 1000 * payment - N;

    std::cout << charge << std::endl;

    return 0;
}