#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_integer( double x ){
    return std::floor(x)==x;
}

int main() {
    double A, B;
    cin >> A >> B;

    double K = (A+B)/2;

    if(is_integer(K)) cout << (int)K << endl;
    else cout << "IMPOSSIBLE" << endl;

    return 0;
}