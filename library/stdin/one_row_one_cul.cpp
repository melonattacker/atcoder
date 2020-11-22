#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> input(n);

    for(int i = 0; i < n; i++) {
        std::cin >> input[i];
    }

    return 0;
}