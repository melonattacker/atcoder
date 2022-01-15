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

int main() {
    string N;
    cin >> N;

    string abc = N;
    string a {N[0]};
    string b {N[1]};
    string c {N[2]};
    string bca = b + c + a;
    string cab = c + a + b;

    cout << std::stoi(abc) +  std::stoi(bca) + std::stoi(cab) << endl; 

    return 0;
}