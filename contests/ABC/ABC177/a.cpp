#include <iostream>

int main() {
    double D, T, S;
    std::cin >> D >> T >> S;

    if(D / S <= T) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}