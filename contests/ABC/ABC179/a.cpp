#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    if(s[s.size()-1] == 's') {
        s.push_back('e');
        s.push_back('s');
    } else {
        s.push_back('s');
    }

    std::cout << s << std::endl;

    return 0;
}