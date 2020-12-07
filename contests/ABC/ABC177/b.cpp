#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S, T;
    std::cin >> S >> T;

    int ans = T.length();

    // Sの何文字目から調べるか
    for(int i = 0; i <= S.length() - T.length(); i++) {
        int diff = 0;
        for(int j = 0; j < T.length(); j++) {
            if(T[j] != S[i + j]) {
                diff++;
            }
        }
        ans = std::min(ans, diff);
    }

    std::cout << ans << std::endl;

    return 0;
}