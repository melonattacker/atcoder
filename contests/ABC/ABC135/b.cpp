#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_v_same(vector<int>& a, vector<int>& b, int N) {
    bool is_ok = true;
    for(int i = 0; i < N; i++) {
        if(a[i] != b[i]) is_ok = false;
    }
    return is_ok;
}

int main() {
    int N;
    cin >> N;

    vector<int> p(N);
    vector<int> expected(N);

    for(int i = 0; i < N; i++) {
        cin >> p[i];
    }

    expected = p;

    sort(expected.begin(), expected.end());
    if(is_v_same(p, expected, N)) {
        cout << "YES" << endl;
        return 0;
    }

    bool ans = false;

    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            vector<int> a = p;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            if(is_v_same(a, expected, N)) ans = true;
        }
    }

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}