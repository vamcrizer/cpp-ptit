// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

2
4 4 3
2 1 0 0
3 2 1 1
4 5 2 1
2 2 9 0
3 3 3
1 2 3
4 5 6
7 8 9

void solve(ll a[][305], int n, int m, ll h[][5]){
	ll r[300][300], res = 0;
	for(int i=1; i<=n-2; i++){
		for(int j=1; j<=m-2; j++){
			r[i][j] = 0;
			for(int x=i; x<=i+2; x++){
				for(int y=j; y<=j+2; y++){
					r[i][j] += a[x][y] * h[x-i+1][y-j+1];
				}
			}res += r[i][j];
		}
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		ll a[305][305];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> a[i][j];
			}
		}ll h[5][5];
		for(int i=1; i<=3; i++){
			for(int j=1; j<=3; j++){
				cin >> h[i][j];
			}
		}solve(a, n, m, h);
	}
}