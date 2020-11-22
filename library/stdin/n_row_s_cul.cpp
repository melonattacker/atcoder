#include <iostream>
#include <vector>

int main() {
    int n, s;
    std::cin >> n >> s;

    std::vector<std::vector<int>> input(n, std::vector<int>(s));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < s; j++) {
            std::cin >> input[i][j];
        }
    }

    return 0;
}