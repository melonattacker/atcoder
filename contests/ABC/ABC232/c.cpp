#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int INF = 1 << 30;
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;

// struct HashPair {

//     static size_t m_hash_pair_random;

//     template<class T1, class T2>
//     size_t operator()(const pair<T1, T2> &p) const {

//         auto hash1 = hash<T1>{}(p.first);
//         auto hash2 = hash<T2>{}(p.second);

//         size_t seed = 0;
//         seed ^= hash1 + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//         seed ^= hash2 + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//         seed ^= m_hash_pair_random + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//         return seed;
//     }
// };

// size_t HashPair::m_hash_pair_random = (size_t) random_device()();


int main() {
    int N, M;
    cin >> N >> M;

    if(M == 0) {
        cout << "Yes" << endl;
        return 0;
    }

    // Graph G1(M);
    vector<pair<int, int>> G;
    unordered_map<string, bool> mp;

    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        string s1 = to_string(a) + to_string(b);
        string s2 = to_string(b) + to_string(a);
        mp[s1] = true;
        mp[s2] = true;
    }

    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G.push_back(make_pair(a, b));
    }

    vector<int> v(N);
    iota(v.begin(), v.end(), 0);
    do{
        bool ok = true;
        for(int i = 0; i < G.size(); i++) {
            string s = to_string(v[G[i].first]) + to_string(v[G[i].second]);
            if(!mp[s]) {
                ok = false;
            }
        }

        if(ok) {
            cout << "Yes" << endl;
            return 0;
        }

    }while(next_permutation(v.begin(),v.end()));

    cout << "No" << endl;

    return 0;
}