#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;

    string S[N];
    map<string, int> Map;

    for (int i = 0; i < N; i++) {
		cin >> S[i];
		if (Map[S[i]] == 0) {
			Map[S[i]] = 1;
			cout << i+1 << endl;
		}
	}
    return 0;
}