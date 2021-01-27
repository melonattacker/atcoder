#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;

    unordered_map<int, int> posi;   
    unordered_map<int, bool> is_open;   

    for(int i = 0; i < 3; i++) {
        for(int j = 1; j < 4; j++) {
            int num;
            cin >> num;
            posi[i * 3 + j] = num;
        }
    }

    cin >> N;
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        is_open[num] = true;
    }

    int is_bingo = false;

    
    for(int i = 0; i < 3; i++) {
        // 横
        if(is_open[posi[i * 3 + 1]] && is_open[posi[i * 3 + 2]] && is_open[posi[i * 3 + 3]]) {
            cout << "Yes" << endl;
            return 0;
        }

        // 縦
        if(is_open[posi[0 * 3 + i + 1]] && is_open[posi[1 * 3 + i + 1]] && is_open[posi[2 * 3 + i + 1]]) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    // 斜め
    if(is_open[posi[1]] && is_open[posi[5]] && is_open[posi[9]]) {
        cout << "Yes" << endl;
        return 0;
    }

    if(is_open[posi[3]] && is_open[posi[5]] && is_open[posi[7]]) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}