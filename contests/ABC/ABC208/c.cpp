#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main() {
    ll N, K;
    cin >> N >> K;

    vector<ll> a(N);
    vector<ll> kashi(N);
    unordered_map<ll, ll> mp; 

    for(int i = 0; i < N; i++) {
        cin >> a[i];
        mp[a[i]] = i;
    }

    sort(a.begin(), a.end());

    ll sho = K / N;
    ll amari = K % N;

    for(int i = 0; i < N; i++) {
        if(i <= amari-1) {
            kashi[mp[a[i]]] = sho+1; 
        } else {
            kashi[mp[a[i]]] = sho; 
        }
    }

    for(int i = 0; i < N; i++) {
        cout << kashi[i] << endl;
    }

    return 0;
}