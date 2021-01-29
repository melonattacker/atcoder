#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool check(string str, int N, int M, vector<int> s, vector<int> c) {
    if(str.size() != N) {
        return false;
    }

    for(int j = 0; j < M; j++) {
        if(str[s[j]] != (char)(c[j]+'0'))  {
            return false;
        }
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> s(M);
    vector<int> c(M);

    for(int i = 0; i < M; i++) {
        cin >> s[i];
        cin >> c[i];
        s[i]--;
    }

    for(int i = 0; i < 999; i++) {
        string str = to_string(i);
        bool is_ok = check(str, N, M, s, c);
        if(is_ok) {
            cout << str << endl;
            return 0;
        }
    } 

    cout << -1 << endl;

    return 0;
}