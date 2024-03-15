// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[][20], int n, int m){
	int r[20][20] = {0};
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(a[i][j] == 1){
				r[i][j] = r[i-1][j] + 1;
			}
		}
	}
	for(int i=1; i<=n; i++){
		sort(r[i]+1, r[i]+m+1, greater<int>());
	}
	int res = 0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			res = max(res, r[i][j] * j);
		}
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[20][20];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> a[i][j];
			}
		}solve(a, n, m);
	}
}