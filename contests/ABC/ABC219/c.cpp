#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main() {
    string X;
    int N;
    cin >> X >> N;

    string J = "abcdefghijklmnopqrstuvwxyz";

    unordered_map<string, string> ts;  
    unordered_map<char, int> ji;  
    vector<string> S(N);
    vector<string> T(N);

    for(int i = 0; i < N; i++) {
        cin >> S[i];
    }

    for(int i = 0; i < X.size(); i++) {
        ji[X[i]] = i;
    }

    for(int i = 0; i < N; i++) {
        string t = "";
        for(int j = 0; j < S[i].size(); j++) {
            t += J[ji[S[i][j]]];
        }
        T[i] = t;
        ts[T[i]] = S[i];
    }

    sort(T.begin(), T.end());

    for(int i = 0; i < N; i++) {
        cout << ts[T[i]] << endl;
    }

    return 0;
}