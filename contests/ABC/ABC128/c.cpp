#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> vec(M);
    vector<int> p(M);

    for(int i = 0; i < M; i++) {
        int k;
        cin >> k;
        vec[i].resize(k);
        for(int j = 0; j < k; j++) {
            cin >> vec[i][j];
            --vec[i][j];
        }
    }

    for(int i = 0; i < M; i++) {
        cin >> p[i];
    }

    int ans = 0;
    for (int i = 0; i < (1<<N); ++i) {
        
        bool ok = true;
        for(int j = 0; j < M; j++) {

            int on = 0;
            
            for (int id : vec[j]) {
				if ((i >> id) & 1) {
					++on;
				}
			}
            

            if(on % 2 != p[j]) {
                ok = false;
            }
        }

        if(ok) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}