#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

bool judge(string S) {
    int dep = 0;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == '(') dep += 1;
        if(S[i] == ')') dep -= 1;
        if(dep < 0) return false;
    }
    if(dep == 0) return true;
    return false;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < (1<<N); i++) {
        string Candidate = "";
        for (int j = N - 1; j >= 0; j--) {
            if ((i & (1<<j)) == 0) { // "i"のj桁目が0かどうかチェック
                Candidate += "(";
            } else {
                Candidate += ")";
            }
        }

        bool is_ok = judge(Candidate);
        if(is_ok) cout << Candidate << endl;
    }

    return 0;
}