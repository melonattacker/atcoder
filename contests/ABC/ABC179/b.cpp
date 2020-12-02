#include <iostream>
#include <vector>
#include <string>

int main() {
    int n, s;
    std::string result;
    std::cin >> n;

    s = 2;
    result = "No";

    std::vector<std::vector<int>> input(n, std::vector<int>(s));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < s; j++) {
            std::cin >> input[i][j];
        }
    }

    for(int i = 0; i < n-2; i++) {
        if(input[i][0] == input[i][1] && input[i+1][0] == input[i+1][1] && input[i+2][0] == input[i+2][1]) {
            result = "Yes";
        }
    }

    std::cout << result << std::endl;

    return 0;
}