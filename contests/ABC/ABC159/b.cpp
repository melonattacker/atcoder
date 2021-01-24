#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_palin(int start, int end, string s) {
    int n = end - start + 1;

    bool is_ok = true;
    int j = 0;

    for(int i = start; i <= start + n / 2; i++) {
        if(s[start + j] == s[end - j]) {

        } else {
            is_ok = false;
        }

        if(!is_ok) {
            return is_ok;
        }

        j++;
    }

    return is_ok;
}

int main() {
    string S;
    cin >> S;

    int N = (int) S.size();

    bool is_first_ok = is_palin(0, N-1, S);
    bool is_second_ok = is_palin(0, (N-1)/2-1, S);
    bool is_third_ok = is_palin((N+3)/2-1, N-1, S);

    if(is_first_ok && is_second_ok && is_third_ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}