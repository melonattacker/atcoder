#include <iostream>
#include <vector>

int main() {
    int n, count;
    std::cin >> n;

    std::vector<int> input(n);

    for(int i = 0; i < n; i++) {
        std::cin >> input[i];
    }

    count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                if(input[i] != input[j] && input[j] != input[k] && input[k] != input[i]) {
                    if(input[i] + input[j] > input[k] && input[j] + input[k] > input[i] && input[k] + input[i] > input[j]) {
                        count++;
                    }
                }
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}