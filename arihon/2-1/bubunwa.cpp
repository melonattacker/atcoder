// 例題: 部分和問題
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N = 20;

vector<int> a(MAX_N);
int n, k;

// iまででsumを作って、残りi以降を調べる
bool dfs(int i, int sum) {
    // n個決め終わったら、今までの和sumがkと等しいかを返す
    if(i == n) return sum == k;

    // a[i]を使わない場合
    if(dfs(i + 1, sum)) return true;

    // a[i]を使う場合
    if(dfs(i + 1, sum + a[i])) return true;

    // a[i]を使う使わないにかかわらず、kが作れないのでfalseを返す
    return false;
}

int main() {
    cin >> n, k;

    a.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(dfs(0,0)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}