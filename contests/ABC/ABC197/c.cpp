#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// string toBinary(int n) {
//     string r;
//     while (n != 0){
//         r += ( n % 2 == 0 ? "0" : "1" );
//         n /= 2;
//     }
//     return r;
// }

ll bitOR(vector<ll> v) {
    bitset<30> res(v[0]);
    for(int i = 1; i < v.size(); i++) {
        bitset<30> a(v[i]);
        res = res | a;
    }
    return res.to_ullong();
}

ll bitXOR(vector<ll> v) {
    bitset<30> res(v[0]);
    for(int i = 1; i < v.size(); i++) {
        bitset<30> a(v[i]);
        res = res ^ a;
    }
    return res.to_ullong();
}

int main() {
    int N;
    cin >> N;

    vector<ll> A(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    ll mini = 100000000000000000;

    for (int bit = 0; bit < (1<<N-1); ++bit) {
		// cout << bitset<10>(bit) << endl;
        int idx = 0;
        vector<ll> v;
        for (int i = 0; i < N; ++i) {
            if (bit & (1<<i)) { // "bit"のi桁目が1かどうかチェック
                // cout << idx << ", " << i+1 << endl;
                vector<ll> sub {A.begin()+idx, A.begin()+i+1};
                v.push_back(bitOR(sub));
                idx = i+1;
            }
        }

        // cout << idx << ", " << N << endl;
        vector<ll> sub {A.begin()+idx, A.begin()+N};
        v.push_back(bitOR(sub));

        // cout << bitXOR(v) << endl;
        mini = min(mini, bitXOR(v));
    }

    cout << mini << endl;

    return 0;
}