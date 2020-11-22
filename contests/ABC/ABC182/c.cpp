#include <iostream>
#include <vector>
#include <functional>

int get_digit(long long num){
    int digit=0;
    while(num!=0){
        num /= 10;
        digit++;
    }
    return digit;
}

void to_vec(int digit, long long num, std::vector<int>& v){
    for(int i = 0; i < digit; i++) {
        v[i] = num % 10;
        num /= 10;
    }
}

int main() {
    long long n;
    int digit;

    std::cin >> n;

    digit = get_digit(n);
    std::vector<int> v(digit);

    to_vec(digit, n, v);
    
    if(n % 3 == 0) {
        std::cout << 0 << std::endl;
        std::exit(0);
    } else if(n % 3 == 1) {
        for(int i = 0; i < digit; i++) {
            if(v[i] % 3 == 1) {
                if(digit == 1) {
                    std::cout << -1 << std::endl;
                    std::exit(0);
                } else {
                    std::cout << 1 << std::endl;
                    std::exit(0);
                }
            }
        }

        if(digit == 2) {
            std::cout << -1 << std::endl;
            std::exit(0);
        } else {
            std::cout << 2 << std::endl;
            std::exit(0);
        }        
    } else if(n % 3 == 2) {
        for(int i = 0; i < digit; i++) {
            if(v[i] % 3 == 2) {
                if(digit == 1) {
                    std::cout << -1 << std::endl;
                    std::exit(0);
                } else {
                    std::cout << 1 << std::endl;
                    std::exit(0);
                }
            }
        }

        if(digit == 2) {
            std::cout << -1 << std::endl;
            std::exit(0);
        } else {
            std::cout << 2 << std::endl;
            std::exit(0);
        }     
    }
}

