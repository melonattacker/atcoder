#include <iostream>
#include <vector>
#include <cstdlib>

int main() {
    int r1, c1, r2, c2;
    std::cin >> r1 >> c1 >> r2 >> c2;
    int r = r2 - r1;
    int c = c2 - c1;

    int ans = 3;

    if(r == 0 && c == 0) {
        ans = 0;

    } else if(r == c | r == -c | std::abs(r) + std::abs(c) <= 3) {
        ans = 1;

    } else if((r1 + c1 + r2 + c2) % 2 == 0 | std::abs(r) + std::abs(c) <= 6 | std::abs(r + c) <= 3 | std::abs(r - c) <= 3) {
        ans = 2;

    }

    std::cout << ans << std::endl;

    return 0;
}