#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    int odd = N - N / 2;

    double pro = (double)odd / (double)N;

    cout << std::fixed << std::setprecision(10) << pro << endl;

    return 0;
}