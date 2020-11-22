#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>

int main(void){
    int n;
    double sx, sy, gx, gy;

    n = 4;

    std::vector<long> v(n);
    
    for(int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    sx = (double) v[0];
    sy = (double) v[1];
    gx = (double) v[2];
    gy = (double) v[3];

    std::cout << std::fixed << std::setprecision(10) << (sx * gy + gx * sy) / (sy + gy) << std::endl;
    return 0;
}