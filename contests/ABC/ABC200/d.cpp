#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
typedef long long ll;

void output(vector<int> &a) {
    cout << a.size();
    for(auto &nx : a){
        cout << ' ' << nx;
    }
    cout << '\n';
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<vector<int>> bk(200,vector<int>(0));

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int cnt = min(N,8);
    for(int i = 1; i < (1<<cnt); i++) {
        int sig = 0;
        vector<int> s;
        for(int j = 0; j < cnt; j++) {
            if(i & (1<<j)) {
                s.push_back(j+1);
                sig += A[j];
                sig %= 200;
            }
        }

        if(bk[sig].size() != 0) {
            cout << "Yes\n";
            output(bk[sig]);
            output(s);
            return 0;
        }
        else{bk[sig]=s;}
    }
    cout << "No\n";
}