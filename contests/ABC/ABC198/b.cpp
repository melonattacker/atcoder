#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    int N;
    cin >> N;

    string s = to_string(N);

    for(int i = 0; i < 10; i++) {
        if(isPalindrome(s)) {
            cout << "Yes" << endl;
            return 0;
        }
        s.insert(0, "0");
    }

    cout << "No" << endl;

    return 0;
}