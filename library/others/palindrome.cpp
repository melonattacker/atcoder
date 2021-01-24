#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    string s = "akasaka";
    int n = (int) s.size();
    bool is_all_ok = isPalindrome(s);
    bool is_part_ok = isPalindrome(s.substr(0, s.size()/2));
    cout << is_all_ok << endl;
    cout << is_part_ok << endl;
}