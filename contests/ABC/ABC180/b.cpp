#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip> 

int main() {
    int n, c;
    long long m, y;
    std::cin >> n;

    m = 0;
    y = 0;
    c = 0;

    for(int i = 0; i < n; i++) {
        int temp, t_abs;
        std::cin >> temp;
        t_abs = std::abs(temp);
        m += t_abs;
        y += std::pow(t_abs, 2.0);

        
        if(c < t_abs) {
            c = t_abs;
        }
    }

    // マンハッタン距離
    std::cout << m << std::endl;

    // ユークリッド距離
    std::cout << std::fixed << std::setprecision(15) << std::sqrt(y) << std::endl;

    // チェビシェフ距離
    std::cout << c << std::endl;

    return 0;
}