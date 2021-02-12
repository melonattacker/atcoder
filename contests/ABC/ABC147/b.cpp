#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int isPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != t[i]) count++;
    }

    return count;
}

int main() {
    string S;
    cin >> S;

    int count = isPalindrome(S);

    if(count != 0) {
        cout << count / 2 << endl;
    } else {
        cout << count << endl;
    }

    return 0;
}