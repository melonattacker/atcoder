#include <iostream>
#include <vector>

int main() {
    int n, s;
    n = 2;
    s = 2;

    std::vector<std::vector<int>> input(n, std::vector<int>(s));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < s; j++) {
            std::cin >> input[i][j];
        }
    }

    std::cout << input[0][0] * input[1][1] - input[0][1] * input[1][0] << std::endl;

    return 0;
}