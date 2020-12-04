#include <iostream>
#include <cmath>

int main() {
    int n;
    int count;
    std::cin >> n;

    count = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n / i; j++) {
            if(i * j != n) {
                if(i == j) {
                    count++;
                } else {
                    count = count + 2;
                }
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}