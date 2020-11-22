#include <iostream>
#include <vector>
#include <algorithm>
 
int main (){
	int n, k;
	std::cin >> n >> k;
	std::vector<std::vector<int>> time(n, std::vector<int>(n));

	for(int i = 0; i < n; i++) {
		for(int j=0;j<n;j++) {
			std::cin >> time[i][j];
		}
	}
	
	std::vector<int> index;

	for(int i = 0; i < n; i++) {
		index.push_back(i);
	}

    int ans = 0;

	do{
		int t = 0;

        // indexが次の順列になる
		for(int i = 0; i < n; i++) {
            t += time[index[i]][index[(i+1)%n]];
        }
		if(t == k) {
			ans++;
		}
	}while(next_permutation(index.begin()+1, index.end()));

	std::cout << ans << std::endl;
}