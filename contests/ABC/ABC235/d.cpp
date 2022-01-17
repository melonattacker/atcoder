#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }


int main() {
    int a, N;
    cin >> a >> N;

    queue<ll> q;
    V<ll> dis(1000000);
    dis[1] = 0;
    q.push(1);

    while(!q.empty()) {
        ll v = q.front();
        q.pop();
        
        ll s = v * a;
        if(s < dis.size()) {
            if(dis[s] == 0) {
                dis[s] = dis[v] + 1; 
                q.push(s);
            }
        }

        if(v % 10 != 0) {
            string s = to_string(v);
			s.insert(s.begin(),s.back());
			s.pop_back();
			int t = stoi(s);
            if(dis[t] == 0){
				dis[t] = dis[v]+1;
				q.push(t);
			}
        }
    }

    int ans = dis[N];
	if(ans==0) ans = -1;
	cout << ans << endl;
	

    return 0;
}