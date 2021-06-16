#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 100000000;
const long long INF = 1LL << 60;

int main() {
    long long N, K;
    cin >> N >> K;

    vector<long long> A(N);
    vector<long long> B(N);

    // Step #1. Input
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++) cin >> B[i];

	// Step #2. Check Difference
	long long Diff = 0;
	for (int i = 0; i < N; i++) Diff += abs(A[i] - B[i]);
	if (Diff > K) {
		cout << "No" << endl;
		return 0;
	}

	// Step #3. Check Parity
	if (Diff % 2 != K % 2) {
		cout << "No" << endl;
		return 0;
	}

	// Step #4. Output Yes
	cout << "Yes" << endl;
	return 0;
}

