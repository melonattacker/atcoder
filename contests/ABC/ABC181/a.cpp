#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if(n % 2 == 0) {
        std::cout << "White" << std::endl;
    } else {
        std::cout << "Black" << std::endl;
    }
    return 0;
}