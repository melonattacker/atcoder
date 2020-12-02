#include <iostream>
#include <cmath>
#include <set>

int main() {
    long long int n;
    std::cin >> n;

    std::set<long long int> st;
    
    for(long long int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            st.insert(i);
            st.insert(n/i);
        }
    }

    for(auto x:st) std::cout << x << std::endl;

    return 0;
}