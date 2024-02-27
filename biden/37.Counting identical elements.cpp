#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dem[100005];

int main(){
	memset(dem, 0, sizeof(dem));
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> a[i][j];
		int count = 0;
		map<int, int> mapping;
		for(int i = 0; i < n; i++){
			mapping[a[0][i]] = 1;
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(mapping[a[i][j]] == i) mapping[a[i][j]]++;
			}
		}
		for(auto x : mapping){
			if (x.second == n){
				count++;
			}
		}
		cout << count << endl;
	}
	// Biden
	return 0;
}

