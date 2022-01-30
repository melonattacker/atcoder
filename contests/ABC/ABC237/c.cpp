#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

bool isPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}


int main() {
    string S;
    cin >> S;

    bool ok = true;

    int l = 0;
    int r = S.size()-1;

    while(true) {
        if(l >= r) break;
        if(S[l] != S[r]) {
            if(S[r] != 'a') {
                ok = false;
                break;
            } else {
                r--;
            }
        } else {
            l++, r--; 
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}