#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

int main() {
    int n, m;


    while(true) {
        cin >> n >> m;
        if(n == 0 && m == 0) break; // nもmも0なら終了

        vector<int> s1(n);
        vector<int> s2(m);

        int cnt_s1 = 0;
        int cnt_s2 = 0;

        for(int i = 0; i < n; i++) cin >> s1[i], cnt_s1 += s1[i];
        for(int i = 0; i < m; i++) cin >> s2[i], cnt_s2 += s2[i];

        bool is_ok = false;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int a = cnt_s1 - s1[i] + s2[j];
                int b = cnt_s2 - s2[j] + s1[i];
                if(a == b) {
                    cout << s1[i] << " " << s2[j] << endl;
                    is_ok = true;
                    break;
                } 
            }

            if(is_ok) break;
        }

        if(!is_ok) {
            cout << -1 << endl;
        }
    }

    return 0;
}