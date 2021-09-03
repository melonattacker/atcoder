#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    ll N;
    string S;
    cin >> N >> S;

    vector<pair<char, long long>> v;

    ll cnt = 0;
    for(int i = 0; i < S.size(); i++) {
        cnt++;
        if(i == (int)S.size()-1 || S[i] != S[i+1]) {
            v.push_back(make_pair(S[i], cnt));
            cnt = 0;
        }
    }

    ll ans = 0;
    for(int i = 0; i < v.size(); i++) {
        ans += 1LL * v[i].second * (v[i].second + 1LL) / 2LL;
    }

    cout << N * (N+1) / 2LL - ans << endl;

    return 0;
}