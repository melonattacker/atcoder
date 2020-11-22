#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int> > input(n, std::vector<int>(2));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            std::cin >> input[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                std::pair<int, int> p1 = std::make_pair(input[i][0], input[i][1]);
                std::pair<int, int> p2 = std::make_pair(input[j][0], input[j][1]);
                std::pair<int, int> p3 = std::make_pair(input[k][0], input[k][1]);
                p1.first -= p3.first;
                p2.first -= p3.first;
                p1.second -= p3.second;
                p2.second -= p3.second;
                if(p1.first*p2.second == p1.second*p2.first) {
                    std::cout << "Yes" << std::endl;
                    std::exit(0);
                }
            }
        }
    }
    
    std::cout << "No" << std::endl;

    return 0;
}