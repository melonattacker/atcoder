#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if(x >= 0) {
        std::cout << x << std::endl;
    } else if(x < 0) {
        std::cout << 0 << std::endl;
    }
    return 0;
}