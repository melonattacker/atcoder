#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;

    // 高さ
    std::unordered_map<int, int> ltoh;  
    std::unordered_map<int, std::unordered_map<int, bool>> ltoltob;
    // 1本の道でたどり着く展望台の数
    std::unordered_map<int, int> lton;
    // 1本の道でたどり着く展望台の中で自身より小さい展望台の数
    std::unordered_map<int, int> ltos;  

    for(int i = 1; i <= N; i++) {
        int height;
        cin >> height;
        ltoh[i] = height;
    }

    for(int i = 0; i < M; i++) {
        int a;
        int b;
        cin >> a;
        cin >> b;

        if(ltoltob[a][b] == true && ltoltob[b][a] == true) {
            continue;
        }

        lton[a] += 1;
        lton[b] += 1;

        ltoltob[a][b] = true;
        ltoltob[b][a] = true;

        if(ltoh[a] < ltoh[b]) {
            ltos[b] += 1; 
        } else if(ltoh[b] < ltoh[a]) {
            ltos[a] += 1; 
        } else {
            continue;
        }
    }

    int ans = 0;

    for(int i = 1; i <= N; i++) {
        if(lton[i] == ltos[i] || lton[i] == 0) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}