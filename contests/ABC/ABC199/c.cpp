#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, Q;
    string S;
    cin >> N >> S >> Q;

    vector<int> T(Q);
    vector<int> A(Q);
    vector<int> B(Q);

    for(int i = 0; i < Q; i++) {
        cin >> T[i];

        int a,b;
        cin >> a; 
        cin >> b;

        A[i] = a - 1;
        B[i] = b - 1;
    }

    bool reverse = false;

    for(int i = 0; i < Q; i++) {
        if(T[i] == 1) {
            if(reverse) {
                int a, b;
                if(B[i]+1 <= N) {
                    b = B[i] + N;
                } else {
                    b = B[i] - N;
                }

                if(A[i]+1 <= N) {
                    a = A[i] + N;
                } else {
                    a = A[i] - N;
                }

                char kari = S[b];
                S[b] = S[a];
                S[a] = kari;
            } else {
                char kari = S[B[i]];
                S[B[i]] = S[A[i]];
                S[A[i]] = kari;
            }
            
        } else if(T[i] == 2) {
            if(reverse) reverse = false;
            else reverse = true;
        }
    }

    if(reverse) {
        string f = S.substr(0, N);
        string s = S.substr(N, N);
        S = s + f;
    }

    cout << S << endl;

    return 0;
}