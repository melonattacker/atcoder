#include <iostream>

int main() {
    int a,b;
    std::cin >> a;
    std::cin >> b;

    int possible = 2 * a + 100;
    std::cout << possible - b << std::endl;
}