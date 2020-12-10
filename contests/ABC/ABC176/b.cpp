#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string n;
    long long sum;
    cin >> n;

    sum = 0;

    int size = n.size();

    for(int i = 0; i < size; i++) {
        string str = {n[i]};
        sum += stoi(str);
    }

    if(sum % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
   
    return 0;
}