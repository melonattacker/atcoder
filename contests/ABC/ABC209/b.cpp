#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    ll N, X;
    cin >> N >> X;

    vector<ll> A(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    ll sum = 0; 

    for(int i = 0; i < N; i++) {
        if((i+1) % 2 == 0) {
            sum += A[i]-1;
        } else {
            sum += A[i];
        }
    }

    if(sum > X) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}