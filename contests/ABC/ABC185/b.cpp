#include <iostream>
#include <vector>

int main() {
    long long n, m, t;
    std::cin >> n >> m >> t;

    std::vector<std::vector<int>> input(m, std::vector<int>(2));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < 2; j++) {
            std::cin >> input[i][j];
        }
    }

    long long battery = n; 

    for(int i = 0; i < m; i++) {
        if(i == 0) {
            battery -= input[i][0];
            if(battery <= 0) {
                std::cout << "No" << std::endl;
                std::exit(0);
            }
            long long diff = input[i][1] - input[i][0];
            if(battery + diff >= n) {
                battery = n;
            } else {
                battery += diff;
            }
        } else {
            long long pre_diff = input[i][0] - input[i-1][1];
            battery -= pre_diff;
            if(battery <= 0) {
                std::cout << "No" << std::endl;
                std::exit(0);
            }
            long long diff = input[i][1] - input[i][0];
            if(battery + diff >= n) {
                battery = n;
            } else {
                battery += diff;
            }
        }
    }

    battery = battery - (t - input[m-1][1]);

    if(battery <= 0) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }

    return 0;
}