#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> S(n);
    for(int i = 0; i < n; i++) { cin >> S[i]; }
    int q;
    cin >> q;
    vector<int> T(q);
    for(int i = 0; i < q; i++) { cin >> T[i]; }

    sort(S.begin(), S.end());
    sort(T.begin(), T.end());

    int cnt = 0;
    for(int i = 0; i < q; i++) {
        bool ok = false;
        int left = 0, right = (int)S.size();
        while (right - left > 1) {
            int mid = (left + right) / 2;
            if (S[mid] > T[i]) right = mid;
            else left = mid;
        }

        if (S[left] == T[i]) cnt++;
    }

    cout << cnt << endl;

    return 0;
}