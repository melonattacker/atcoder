#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string S;
    cin >> S;

    string T = "ATGC";

    int maxi = 0;

    for(int i = 0; i < S.size(); i++) {
        for(int j = i; j < S.size(); j++) {
            int ok = 1;
            for(int k = i; k < j+1; k++) {
                if (T.find(S[k]) == string::npos) ok = 0;
            }
            if(ok) {
                maxi = max(maxi, j-i+1);
            }
        }
    }

    cout << maxi << endl;

    return 0;
}