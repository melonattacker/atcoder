#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;

    string a_str = "";
    string b_str = "";
    vector<string> s;

    for(int i = 0; i < b; i++) {
        a_str += to_string(a);
    }

    for(int i = 0; i < a; i++) {
        b_str += to_string(b);
    }

    s.push_back(a_str);
    s.push_back(b_str);

    sort(s.begin(), s.end());

    cout << s[0] << endl;

    return 0;
}