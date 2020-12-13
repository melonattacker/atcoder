#include <iostream>

int main() {
    int a1, a2, a3, a4, min;
    std::cin >> a1 >> a2 >> a3 >> a4;

    min = 100;

    if(min > a1) {
        min = a1;
    }

    if(min > a2) {
        min = a2;
    }

    if(min > a3) {
        min = a3;
    }

    if(min > a4) {
        min = a4;
    }

    std::cout << min << std::endl;

    return 0;
}