#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5][n+5], dem[105][100005] = {0};
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				cin >> a[i][j];
				dem[i][a[i][j]] = dem[i-1][a[i][j]] + 1;
			}
		}int res = 0;
		for(int i=1; i<=n; i++){
			if(dem[n][a[n][i]] == n){
				++res;
				dem[n][a[n][i]] = 0;
			}
		}cout << res << endl;
	}
}