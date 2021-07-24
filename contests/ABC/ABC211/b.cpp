#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    std::vector<string> S(4);

    for(int i = 0; i < 4; i++) {
        cin >> S[i];
    }

    sort(S.begin(), S.end());

    if(S[0] == "2B" && S[1] == "3B" && S[2] == "H" && S[3] == "HR") {
        cout << "Yes" << endl;
        return 0;
    } else {
        cout << "No" << endl;
        return 0;
    }

    return 0;
}