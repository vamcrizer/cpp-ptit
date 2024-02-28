// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int r[205][205];
void solve(int a[][205], int n, int m){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			r[i][j] = r[i-1][j] + r[i][j-1] - r[i-1][j-1] + a[i][j];
		}
	}int res = -1e7;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			for(int x=i; x<=n; x++){
				for(int y=j; y<=m; y++){
					int tmp = r[x][y] - r[i-1][y] - r[x][j-1] + r[i-1][j-1];
					res = max(res, tmp);
				}
			}
		}
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		memset(r, 0, sizeof(r));
		int n, m; cin >> n >> m;
		int a[205][205];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> a[i][j];
			}
		}solve(a, n, m);
	}
}