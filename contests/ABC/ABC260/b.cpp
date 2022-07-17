#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
using mint = modint1000000007;
using Graph = vector<vector<int>>;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    V<int> A(N), cA(N);
    V<int> B(N), cB(N);
    map<int, bool> del;
    V<int> sum(N);

    rep(i, 0, N) cin >> A[i];
    rep(i, 0, N) cin >> B[i];
    rep(i, 0, N) sum[i] = A[i]+B[i];
    cA = A, cB = B;

    
    sort(A.begin(), A.end(), std::greater<int>());
    sort(B.begin(), B.end(), std::greater<int>());
    sort(sum.begin(), sum.end(), std::greater<int>());

    V<int> ans;

    int i = 0, cnt = 0;
    while(true) {
        if(cnt == X) break;
        for(int j = 0; j < cA.size(); j++) {
            if(A[i] == cA[j] && !del[j]) {
                del[j] = true;
                ans.push_back(j);
                cnt++;
                break;
            }
        }
        i++;
    }

    i = 0, cnt = 0;
    while(true) {
        if(cnt == Y) break;
        for(int j = 0; j < cB.size(); j++) {
            if(B[i] == cB[j] && !del[j]) {
                del[j] = true;
                ans.push_back(j);
                cnt++;
                break;
            }
        }
        i++;
    }

    i = 0, cnt = 0;
    while(true) {
        if(cnt == Z) break;
        for(int j = 0; j < sum.size(); j++) {
            if(sum[i] == cA[j]+cB[j] && !del[j]) {
                del[j] = true;
                ans.push_back(j);
                cnt++;
                break;
            }
        }
        i++;
    }

    sort(ans.begin(), ans.end());
    for(auto num: ans) {
        cout << num+1 << endl;
    }

    return 0;
}