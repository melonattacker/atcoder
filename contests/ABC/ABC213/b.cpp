#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    unordered_map<int, int> mp;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        mp[A[i]] = i+1;
    }

    sort(A.begin(), A.end());

    cout << mp[A[N-2]] << endl;

    return 0;
}