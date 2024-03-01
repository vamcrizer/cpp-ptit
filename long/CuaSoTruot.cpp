// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[][105], int b[][15], int n, int m){
	int r[105][105];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			int x = i, y = j;
			if(x%m==0) x = m;
			else x %= m;
			if(y%m==0) y = m;
			else y %= m;
			r[i][j] = a[i][j] * b[x][y];
			cout << r[i][j] << ' ';
		}cout << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	int a[105][105];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
		}
	}

	int m; cin >> m;
	int b[15][15];
	for(int i=1; i<=m; i++){
		for(int j=1; j<=m; j++){
			cin >> b[i][j];
		}
	}solve(a, b, n, m);
}