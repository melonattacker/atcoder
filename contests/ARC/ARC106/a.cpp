#include <iostream>
#include <cmath>
#include <string>

int main() {
    long long n;
    int flag;

    flag = 0;
    std::cin >> n;

    for(long long a = 1, a_mul = 3; a < 38; a++, a_mul *= 3) {
        for(long long b= 1, b_mul = 5; b < 26; b++, b_mul *= 5) {
            if(a_mul + b_mul == n) {
                std::cout << a  << " " << b << std::endl;
                flag = 1;
                exit(0);
            }
        }
    }

    if(flag == 0) {
        std::cout << -1 << std::endl;
    }   
    return 0;
}