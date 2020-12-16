#include <iostream>
#include <vector>

int main() {
    long long N, D, ans;
    std::cin >> N >> D;

    std::vector<std::vector<long long>> input(N, std::vector<long long>(2));

    for(int i = 0; i < N; i++) {
        std::cin >> input[i][0] >> input[i][1];
    }

    ans = 0;

    for(int i = 0; i < N; i++) {
        if(input[i][0] * input[i][0] + input[i][1] * input[i][1] <= D * D) {
            ans++;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}