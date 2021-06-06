#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<ll> T(N);

    for(int i = 0; i < N; i++) {
        cin >> T[i];
    }

    sort(T.begin(), T.end());

    ll a = 0;
    ll b = 0;
    vector<ll> A;
    vector<ll> B;


    a += T[0];
    A.push_back(T[0]);

    for(int i = 1; i <= N/2; i++) {
        if(a <= b) {
            a += T[N-i];
            A.push_back(T[N-i]);
        } else {
            b += T[N-i];
            B.push_back(T[N-i]);
        }

        if(i == N-i) break;

        if(a <= b) {
            a += T[i];
            A.push_back(T[i]);
        } else {
            b += T[i];
            B.push_back(T[i]);
        }
    }

    // cout << a << endl;
    // cout << b << endl;

    // for(auto x: A) {
    //     cout << x << ", ";
    // }
    // cout << endl;

    // for(auto x: B) {
    //     cout << x << ", ";
    // }
    // cout << endl;

    for(int i = 0; i < A.size(); i++) {
        for(int j = 0; j < B.size(); j++) {
            if(abs((a - A[i] + B[j]) - (b - B[j] + A[i])) < abs(a - b)) {
                // cout << A[i] << " " << B[i] << endl;
                // cout << abs((a - A[i] + B[j]) - (b - B[j] + A[i])) << " " << abs(a - b) << endl;
                a = a - A[i] + B[j];
                b = b - B[j] + A[i];

                ll kari = A[i];
                A[i] = B[j];
                B[j] = kari;
            }
        }
    }

    // for(auto x: A) {
    //     cout << x << ", ";
    // }
    // cout << endl;

    // for(auto x: B) {
    //     cout << x << ", ";
    // }
    // cout << endl;

    // cout << a << endl;
    // cout << b << endl;

    cout << max(a, b) << endl;

    return 0;
}