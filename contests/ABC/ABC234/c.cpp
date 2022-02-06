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

string convert(ll x) {
    string res;
    while(x > 0) {
        res.push_back('0'+(x%2));
        x /= 2;
    }
    reverse(all(res));
    return res;
}

void output(string s){
  for(auto &nx : s){
    if(nx=='1'){cout << '2';}
    else{cout << '0';}
  }
  cout << '\n';
}

int main() {
    ll k;
    cin >> k;
    output(convert(k));
    return 0;
}