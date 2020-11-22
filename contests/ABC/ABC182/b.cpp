#include <iostream>
#include <vector>

int main(void){
    int n, max, number;
    std::cin >> n;

    std::vector<long> v(n);
    
    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    max = 0;
    number = 0;

    for(int j = 2; j <= 1000; j++) {
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] % j == 0) {
                count++;
            }
        }
        if(count > max) {
            max = count;
            number = j;
        }
    }

    std::cout << number << std::endl;
}