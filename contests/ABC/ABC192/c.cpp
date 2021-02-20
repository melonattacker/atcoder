#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int g1(int x) {
    string s = to_string(x);
    vector<int> v;
    int num = 0;
    for(int i = 0; i < s.size(); i++) {
        v.emplace_back(s[i]-'0');
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        num += (int) pow(10, i) * v[i];
    }

    // cout << num << endl;
    return num;
}

int g2(int x) {
    string s = to_string(x);
    vector<int> v;
    int num = 0;
    for(int i = 0; i < s.size(); i++) {
        v.emplace_back(s[i]-'0');
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        num += (int) pow(10, ((int)v.size() - i - 1)) * v[i];
    }

    // cout << num << endl;
    return num;
}

int main() {
    int N, K;
    cin >> N >> K;

    int a = N;

    for(int i = 0; i < K; i++) {
        a = g1(a) - g2(a);
    }

    cout << a << endl;

    return 0;
}