#include <iostream>
#include <vector>
#include <string>

int main() {
    int n, x;
    std::cin >> n >> x;

    std::string s;
    std::cin >> s;

    for(int i = 0; i < n; i++) {
        if(x == 0) {
            if(s[i] == 'o') {
                x += 1;
            } else if(s[i] == 'x') {
                x += 0;
            }
        } else {
            if(s[i] == 'o') {
                x += 1;
            } else if(s[i] == 'x') {
                x -= 1;
            }
        }
    }

    std::cout << x << std::endl;

    return 0;
}