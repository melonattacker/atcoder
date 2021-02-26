#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;

    if(S == "Sunny") {
        cout << "Cloudy" << endl;
    } else if(S == "Cloudy") {
        cout << "Rainy" << endl;
    } else if(S == "Rainy") {
        cout << "Sunny" << endl;
    }

    return 0;
}