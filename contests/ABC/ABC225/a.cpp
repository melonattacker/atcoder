#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    string S;
    cin >> S;

    std::set<string> s;
    sort(S.begin(), S.end());

    do{
        s.insert(S);
    }while(next_permutation(S.begin(),S.end()));


    cout << s.size() << endl;
    return 0;
}