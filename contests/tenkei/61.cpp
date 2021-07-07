#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    int Q;
    cin >> Q;

    std::vector<int> t(Q);
    std::vector<int> x(Q);
    std::deque<int> deck;

    for(int i = 0; i < Q; i++) {
        cin >> t[i] >> x[i];
    }

    for(int i = 0; i < Q; i++) {
        if(t[i] == 1) {
            deck.push_front(x[i]);
        } else if(t[i] == 2) {
            deck.push_back(x[i]);
        } else if(t[i] == 3) {
            cout << deck[x[i]-1] << endl;
        }
    }

    return 0;
}