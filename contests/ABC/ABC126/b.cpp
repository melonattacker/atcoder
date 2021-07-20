#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    string S;
    cin >> S;

    int a = stoi(S.substr(0, 2));
    int b = stoi(S.substr(2));
    
    bool YYMM = false;
    if(1 <= b and b <= 12) YYMM = true;
    bool MMYY = false;
    if(1 <= a and a <= 12) MMYY = true;

    if(YYMM and MMYY) cout << "AMBIGUOUS" << endl;
    else if(YYMM) cout << "YYMM" << endl;
    else if(MMYY) cout << "MMYY" << endl;
    else cout << "NA" << endl;

    return 0;
}