// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int ps[505][505];
void solve(int a[][505], int n, int m, int k){
	int r[500][500];
	for(int i=1; i<=n-k+1; i++){
		for(int j=1; j<=m-k+1; j++){
			int x = i + k - 1;
			int y = j + k - 1;
			r[i][j] = ps[x][y] - ps[i-1][y] - ps[x][j-1] + ps[i-1][j-1];
			r[i][j] /= (k*k);
		}
	}
	for(int i=1; i<=n-k+1; i++){
		for(int j=1; j<=m-k+1; j++){
			cout << r[i][j] << ' ';
		}cout << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n, m, k; cin >> n >> m >> k;
		int a[505][505];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> a[i][j];
			}
		}memset(ps, 0, sizeof(ps));
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				ps[i][j] = ps[i-1][j] + ps[i][j-1] - ps[i-1][j-1] + a[i][j];
			}
		}solve(a, n, m, k);
	}
}